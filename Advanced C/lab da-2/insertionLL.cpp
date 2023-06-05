#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtBeginning(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertInMiddle(Node *head, int x)
{
    if (head == NULL)
        return;

    Node *temp = new Node();
    temp->data = x;
    temp->next = head->next;
    head->next = temp;
}

void AppendNode(Node *head, int x)
{
}

void print(Node *&head)
{
    Node *temp = head;
    cout << "Linked List is: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 6);

    // insertInMiddle(head, 10);

    print(head);

    return 0;
}