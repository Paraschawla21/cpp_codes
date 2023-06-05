#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;
    }
};

// traversing a linked list
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

// gives the length of linked list
int get_length(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insert_at_head(Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_at_tail(Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
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

    if (temp->next = NULL)
    {
        insert_at_tail(tail, d);
        return;
    }

    Node *node_to_insert = new Node(d);

    node_to_insert->next = temp->next;
    temp->next->prev = node_to_insert;
    temp->next = node_to_insert;
    node_to_insert->prev = temp;
}

void delete_node(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;

        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insert_at_head(head, 15);
    insert_at_tail(tail, 15);
    insert_at_tail(tail, 20);

    print(head);

    // insert_at_position(head, tail, 2, 100);

    print(head);

    // insert_at_position(head, tail, 1, 200);

    print(head);

    cout << "Head " << head << endl;
    cout << "Tail " << tail << endl;

    delete_node(head, 3);

    print(head);

    cout << "Head " << head << endl;
    cout << "Tail " << tail << endl;

    return 0;
}