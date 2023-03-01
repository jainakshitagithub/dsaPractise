
#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode*next;
    ListNode(int val){
        data = val;
        next = NULL;
    }
};

ListNode*insertAtEnd(ListNode*head , int val){
    ListNode*n = new ListNode(val);
    ListNode*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    return head;
}

void traversal(ListNode*head){
    ListNode*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//  ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int size = 0;
//         int i=0;
//         ListNode*temp = head;
//         ListNode*p1 = head;

//         ListNode*delNode;
//         while(temp!=NULL){
//             size++;
//             temp = temp->next;
//         }
        
//        if(n>size)return head;

//        else if((size-n)==0){
//         delNode = p1;
//         head = head->next;
//        }

//        else{
//          while(i!=(size-n-1)){
//             p1 = p1->next;
//             i++;
//         }
//         p1->next = p1->next->next;
//         delNode = p1->next;
//        }

//        delete(delNode);
//        return head;
//     }

    ListNode* removeNthFromEnd(ListNode*head , int n){
        ListNode*start = new ListNode(0);
        start->next = head;
        ListNode*fast = start;
        ListNode*slow = start;

       for(int i=0 ; i<=n ; i++)fast=fast->next;

        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return start->next;
    }

int main(){ 
        ListNode*head = new ListNode(1);
    head = insertAtEnd(head , 2);
    head = insertAtEnd(head , 3);
    head = insertAtEnd(head , 4);
    head = insertAtEnd(head , 5);

    traversal(head);
   head =  removeNthFromEnd(head , 2);
    traversal(head);
     return 0;
}