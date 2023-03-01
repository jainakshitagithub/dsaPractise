#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

Node *insertAtHead(Node *head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        return head;
    }
    Node *temp = head;
    head->prev = n;
    n->next = head;
    head = n;
    return head;
}

Node *insertAtTail(Node *head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        return head;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
    return head;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deleteNode(Node *head, int x)
{
    Node *temp = head;
    Node *q = head;

    if (x == 1)
    {
        head = temp->next;
        delete (temp);
        return head;
    } 

    int count = 1;
    while (count != x - 1)
    {
        temp = temp->next;
        count++;
    }

    q = temp->next;
    temp->next = q->next;
    delete (q);

    return head;
}

int main()
{
    Node *head = NULL;
    head = insertAtHead(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = deleteNode(head, 1);

    display(head);
    return 0;
}