#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(Node *head)
{
  Node* temp = head;
  do{
    cout<<temp->data<<" ";
    temp = temp->next;
  }while(temp!=head);
  cout<<endl;
}

void insertAtHead(Node*head , int x)
{
  Node * n = new Node(x);
  if(head == NULL)
  {
    n->next = n;
    head = n;
    return;
  }
  Node* temp = head;
  while(temp->next !=head){
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
  head = n;
}

void insertAtTail(Node *head , int x)
{
  Node *n = new Node(x);
  if(head==NULL)
  {
    insertAtHead(head , x);
    return;
  }
  Node * temp = head;
  while(temp->next!=head)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
}

 

int main(){ 
     Node *head = NULL;
     insertAtTail(head , 1);
     insertAtTail(head , 2);
     insertAtTail(head , 3);
     insertAtTail(head , 4);
     display(head);
     insertAtHead(head , 5);
     display(head);
    

     display(head);
     return 0;
}