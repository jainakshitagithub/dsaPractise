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

void traversal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insertAtEnd(Node *head, int val)
{
    Node *n = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
    n->next = NULL;
    return head;
}

Node* segregate(Node *head){
    Node*temp = head;
    int count0=0 , count1 = 0 , count2=0;
    while(temp!=NULL){
       if(temp->data==0)count0++;
       else if(temp->data==1)count1++;
       else count2++;

        temp = temp->next;
    }
    temp = head;
    while(count0>0){
        temp->data=0;
        temp = temp->next;
        count0--;
    }

     while(count1>0){
        temp->data=1;
        temp = temp->next;
        count1--;
    }

     while(count2>0){
        temp->data=2;
        temp = temp->next;
        count2--;
    }
    return head;
}

long long  multiplyTwoLists (Node* l1, Node* l2)
{
    Node*p1 = l1;
    Node*p2 = l2;
    long long num1 = 0 , num2 = 0;
    long long mod = 1000000007;
    while(p1!=NULL){
        num1 = (num1*10 + (p1->data))%mod;
        p1= p1->next;
    }

    while(p2!=NULL){
        num2 = (num2*10 + (p2->data))%mod;
        p2 = p2->next;
    }
    return (num1*num2)%mod;
}

int main(){ 
        Node*head = new Node(0);
    head = insertAtEnd(head , 3);
    head = insertAtEnd(head , 2);

    Node*head2 = new Node(2);

    // traversal(head);
    // head = segregate(head);
    // traversal(head);

  long long res=  multiplyTwoLists(head , head2);
  cout<<res<<endl;

     return 0;
}