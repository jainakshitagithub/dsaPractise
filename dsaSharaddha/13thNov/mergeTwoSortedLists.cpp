#include<bits/stdc++.h>
using namespace std;
class ListNode {
    public:
    int data;
    ListNode*next;

    ListNode(int val){
        data = val;
        next = NULL;
    }

};

void traversal(ListNode*head){
    ListNode*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

ListNode* insertAtEnd(ListNode*head , int val){
    ListNode*n = new ListNode(val);
    ListNode*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    return head;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
    }

int main(){ 
    ListNode*head = new ListNode(1);
    head = insertAtEnd(head ,2);
    head = insertAtEnd(head ,4);
    traversal(head);
    ListNode*head2 = new ListNode(1);
    head2 = insertAtEnd(head2 ,3);
    head2 = insertAtEnd(head2 ,4);
    traversal(head2);




     return 0;
}