#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* insertAtEnd(Node *head , int x)
{
    Node *n  = new Node(x);
    if(head == NULL)
    {
        head = n;
        return head;
    }
    Node *temp = head;
    while(temp->next != NULL )
    {
        temp = temp ->next;
    }
    temp->next = n;
    n->next = NULL;
    return head;
}

void display(Node *head)
{
    Node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteAlt( Node *head){
    // Code here
      Node *temp=head;
   while(temp->next!=NULL && temp!=NULL)
   {
       if(temp->next->next!=NULL)
       {
           Node *temp1=temp->next;
           temp->next=temp->next->next;
           temp=temp->next;
           delete temp1;
       }
       else
       {
           Node *temp1=temp->next;
           temp->next=NULL;
           delete temp1;
       }
   }
}

int fractional_node(struct Node *head, int k)
{
    // your code here
    Node*temp = head;
    Node*temp1 = head;

    int count = 0;
    int i= 1;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    float index = (float) count / (float) k;
    int result = ceil(index);
    while(i!=result)
    {
       if(i==result)
       {
        return temp1->data;
       }
       temp1 = temp1->next;
       i++;
    }

   return temp1->data;
}

int sumOfLastN_Nodes( Node* head, int n)
{
      // Code here
    Node*temp = head;
    Node*temp1 = head;
    int count = 0 , i = 0 , sum = 0;

    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }

    int remain = count - n;

    while(temp1!=NULL )
    {
        if(i>=remain)
        {
            sum = sum + temp1->data;
        }
        i++;
        temp1 = temp1->next;
    }
    return sum;
}

int modularNode(Node* head, int k)
{
	// Code here
    Node * temp = head;
    Node * temp1 = head;
    Node * temp2 = head;
    int ind = -1 , i = 1 , count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    while(count!=0)
    {
        if(count%k==0)
        {
            ind = count;
            break;
        }
        count--;
    }
    if(ind!=-1)
    {
        while(i!=ind)
        {
            i++;
            temp2 = temp2->next;
        }
        ind = temp2->data;
    }
    return ind;
}


int main(){ 
int n ;
    cin>>n;
    Node *head  = NULL;
    for(int i =0 ; i<n ; i++)
    {
        int x;
        cin>>x;

        head = insertAtEnd(head , x);
    }
     display(head);
     int k;
     cin>>k;
    
    // int result = sumOfLastN_Nodes(head , k);
    int result = modularNode(head , k);

    
    //  deleteAlt(head);
    // int result = fractional_node(head , 3);
    cout<<result;


     return 0;
}