#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
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
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insert_node(Node *&tail, int element, int d)
{
    // assuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        Node *new_node = new Node(d);
        tail = new_node;
        new_node->next = new_node;
    }

    // non empty list
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing the node with the element

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void delete_node(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is already empty" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        
        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }
        
        // >= 2 Node Linked List
        if(tail == curr)
        {
            tail = prev;
        }

        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *tail = NULL;

    insert_node(tail, 5, 3);

    print(tail);

    insert_node(tail, 3, 5);

    print(tail);

    insert_node(tail, 5, 7);

    print(tail);

    insert_node(tail, 3, 6);

    print(tail);

    delete_node(tail, 3);

    print(tail);

    delete_node(tail, 5);

    print(tail);

    return 0;
}