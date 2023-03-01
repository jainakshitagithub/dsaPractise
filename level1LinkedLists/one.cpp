#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node *insertAtBegining(Node *head, int x) {
    Node * n = new Node(x);
    n->next = head;
    head = n;
    return head;
    }

Node *insertAtEnd(Node *head, int x)  {
    Node *n = new Node(x);
    // cout<<n->data<<endl;
    Node *temp = head;
    if(head== NULL)
    {
        head = n;
        return head;
    }

        while(temp->next!= NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
        return head;
        }

void display(Node *head)
{
    Node *temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){ 

    Node *head = NULL;
 head =insertAtBegining(head , 9);
 head =insertAtEnd(head , 5);

 head =insertAtBegining(head , 2);
 head =insertAtBegining(head , 5);

 head =insertAtEnd(head , 3);
    display(head);

     return 0;
}