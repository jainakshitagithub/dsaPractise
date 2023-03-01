#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int val){
        data = val;
        next = NULL;
    }

};

void traversal(ListNode*head){
   ListNode* n = head;
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

ListNode*insertAtBeginning(ListNode*head , int data){
    ListNode*n = new ListNode(data);
    n->next = head;
    head = n;
    return head;
}

ListNode*insertAtEnd(ListNode*head , int data){
    ListNode*n = new ListNode(data);
    ListNode*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    return head;
}

ListNode* insertAtIndex(ListNode*head , int data , int index){
    ListNode*n = new ListNode(data);
    ListNode*temp = head;
    int i = 0;
    while(i!=index-1){
        temp = temp->next;
        i++;
    }
   n->next = temp->next;
   temp->next = n;
    return head;
}
 ListNode* reverseList(ListNode* head) {
        ListNode* nextHead = NULL;
        ListNode*next ;
        while(head!=NULL){
            next = head->next;
            head->next = nextHead;
            nextHead = head;
            head = next;
        }
        return nextHead;
    }

int main(){ 
    ListNode*head = new ListNode(11);
    // head = insertAtBeginning(head , 22);
    head = insertAtEnd(head , 33);
    head = insertAtEnd(head , 44);
    head = insertAtEnd(head , 55);

    head = insertAtIndex(head , 4 , 1);
    head = reverseList(head );



    traversal(head);

     return 0;
}