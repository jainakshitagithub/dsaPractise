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

Node*deleteAtEnd(Node*head){
    Node*temp = head;
    Node*delNode;
    while(temp->next->next!=NULL)temp = temp->next;
    delNode = temp->next;
    free(delNode);
    temp->next = NULL;
    return head;
}

Node*reverse(Node *head){
 Node*nextHead = NULL;
 while(head!=NULL){
    Node*nextNode = head->next;
    head->next = nextHead;
    nextHead = head;
    head = nextNode;
 }
 return nextHead;
}

 Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     map<int,int> m ;
     m[head->data]=1;
     Node*curr = head->next;
     Node*prev = head;
     while(curr!=NULL){
        if(m.count(curr->data)){
            prev->next = curr->next;
            free(curr);
        }
        else{
            m[curr->data] = 1;
            prev = curr;
        }
        curr = prev->next;
     }
     return head;

    }

Node *compute(Node *head)
{
    head = reverse(head);
    Node*currHead = head;

    Node*prev = head;
    int max = head->data;
    head = head->next;

    while(head!=NULL){
        if(head->data>=max){
            max = head->data;
            head = head->next;
            prev = prev->next;
        }
        else{
            prev->next = head->next;
            head = head->next;
        }
    }
        head = reverse(currHead);
        return head;

}




int main(){ 
    Node*head = new Node(1);
    head = insertAtEnd(head , 12);
    head = insertAtEnd(head , 15);
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 15);
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 6);
    head = insertAtEnd(head , 2);
    head = insertAtEnd(head , 2);


    // head = deleteAtEnd(head);
    traversal(head);
    // head = compute(head);
    // Node*head = compute(head);
    head = removeDuplicates(head);
    traversal(head);
    
     return 0;
}