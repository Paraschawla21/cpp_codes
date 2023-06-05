#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "\nMemory is free for node with data " << value << endl;
    }
};

void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insert_at_tail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_position(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insert_at_head(head, d);
        return;
    }

    Node *temp = head;
    int current = 1;

    while (current < position - 1)
    {
        temp = temp->next;
        current++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insert_at_tail(tail, d);
        return;
    }

    // creating a node for d
    Node *node_to_insert = new Node(d);

    node_to_insert->next = temp->next;

    temp->next = node_to_insert;
}

void delete_node(int position, Node *&head)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node *current = head;
        Node *previous = NULL;

        int current_pos = 1;

        while (current_pos < position)
        {
            previous = current;
            current = current->next;
            current_pos++;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insert_at_head(head, 12);
    insert_at_tail(tail, 12);

    print(head);

    // insert_at_head(head, 16);
    insert_at_tail(tail, 16);

    print(head);

    insert_at_position(head, tail, 4, 20);

    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    delete_node(4, head);

    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    return 0;
}