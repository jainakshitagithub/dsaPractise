#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *insertAtHead(Node *head, int x)
{
    Node *n = new Node(x);
    // if (head == NULL)
    // {
    //     head = n;
    //     return head;
    // }

    n->next = head;
    head = n;
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

bool areIdentical(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1 != NULL && temp2 == NULL)
            return false;
        else if (temp1 == NULL && temp2 != NULL)
            return false;

        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return true;
}

int GetNth(Node *head, int index)
{
    // Code here
    int i = 1;
    while (head != NULL)
    {
        if (i == index)
        {
            return head->data;
        }
        i++;
        head = head->next;
    }
    return 0;
}

Node *insertAtIndex(Node *head, int x)
{
    // Code here
    Node *n = new Node(x);
    Node *temp = head;
    int pos = 1;
    while (pos != x - 1)
    {
        temp = temp->next;
        pos++;
    }
    n->next = temp->next;
    temp->next = n;
    return head;
}


int isLengthEvenOrOdd(struct Node *head)
{
    // Code here
    int i = 0;
    while (head != NULL)
    {
        i++;
        head = head->next;
    }
    if ((i % 2) == 0)
    {
        return 0;
    }
    return 1;
}



int main()
{
    Node *head = NULL;
    head = insertAtHead(head, 4);
    head = insertAtHead(head, 2);
    head = insertAtHead(head, 1);
    // head = insertAtIndex(head , 3);
    // deleteAlt(head);
    display(head);

    // Node *head2 = NULL;
    // head2 = insertAtHead(head2, 5);
    // head2 = insertAtHead(head2, 4);
    // head2 = insertAtHead(head2, 3);
    // head2 = insertAtHead(head2, 2);
    // head2 = insertAtHead(head2, 1);

    // display(head2);

    // bool result = areIdentical(head , head2);

    // int result = GetNth(head , 5);
    // cout<<result;

    // int result = isLengthEvenOrOdd(head );
    // cout<<result;

    return 0;
}