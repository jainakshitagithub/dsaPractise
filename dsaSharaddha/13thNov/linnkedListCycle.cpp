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

void circularTraversal(ListNode *head){
  ListNode*temp = head;
  do{
    cout<<temp->data<<" ";
    temp = temp->next;
  }while(temp!=head);
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

ListNode* insertAtEndCircularly(ListNode*head , int val){
    ListNode*n = new ListNode(val);
    ListNode*temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    return head;
}

ListNode*insertAtFirstCircularly(ListNode*head , int val){
    ListNode*n = new ListNode(val);
    ListNode*temp = head->next;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next=head;
    head = n;
    return head;
}

 bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        return false;

        ListNode*fast = head;
        ListNode*slow = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow)return true;
        }
        return false;
    }

int main(){ 
    ListNode*head = new ListNode(11);


    // head = insertAtEndCircularly(head , 22);
    // head = insertAtEndCircularly(head , 33);
    // head = insertAtFirstCircularly(head , 44);
    circularTraversal(head);
    // int res = hasCycle(head);
    // cout<<res<<endl;

     return 0;
}