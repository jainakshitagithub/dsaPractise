#include<bits/stdc++.h>
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

void display(Node *head)
{
  Node* temp = head;
  do{
    cout<<temp->data<<" ";
    temp = temp->next;
  }while(temp!=head);
  cout<<endl;
}

Node * insertAtHead(Node*head , int x)
{
  Node * n = new Node(x);
  if(head == NULL)
  {
    n->next = n;
    head = n;
    return head;
  }
  Node* temp = head;
  while(temp->next !=head){
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
  head = n;
  return head;
}

Node * insertAtTail(Node *head , int x)
{
  Node *n = new Node(x);
  if(head==NULL)
  {
    n->next = n;
    head = n;
    return head;
  }
  Node * temp = head;
  while(temp->next!=head)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
  return head;
}



Node *insertInMiddle(Node *head, int x)
{
	Node* mid = new Node(x);
	if(head == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    mid->next = slow->next;
    slow->next = mid;
    return head;

}


void deleteAlt(Node *head)
{
    // Code here
    int i = 1;
    struct Node *temp = head;
    while(temp != NULL)
    {
        if(i%2!=0)
        {
           cout<<temp->data<<"->"; 
        }
      temp = temp->next;
      i++;
    }
    cout<<endl;

}
int main(){ 

    Node *head = NULL;

    head =  insertAtHead(head , 1);
    head =  insertAtTail(head , 2);
    head =  insertAtTail(head , 4);
    head =  insertAtTail(head , 5);

    display(head);
    deleteAlt(head);
    // head =  insertInMiddle(head , 6);
    // display(head);

    

     return 0;
}