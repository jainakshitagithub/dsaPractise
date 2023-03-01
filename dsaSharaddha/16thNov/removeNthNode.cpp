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

int  sizeOfLL(ListNode*head){
    ListNode*temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

ListNode*reverse(ListNode*head){
    ListNode*nextHead = NULL;
    while(head!=NULL){
    ListNode*next = head->next;
        head->next = nextHead;
        nextHead = head;
        head = next;
    }
    return nextHead;
}


 ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = sizeOfLL(head);
        head = reverse(head);
        ListNode*p1 = head;
        ListNode*p2;
        int i = 1;

        if(n==1){
            p2 = head;
            head = head->next;
            free(p2);
            head = reverse(head);
            return head;
        }

        while(i!=n-1){
            p1 = p1->next;
            i++;
        }
        p2 = p1->next;
        p1->next = p2->next;
        free(p2);
        head = reverse(head);
        return head;
    }

int main(){ 
    ListNode*head = new ListNode(1);
    head = insertAtEnd(head , 2);
    head = insertAtEnd(head , 3);
    head = insertAtEnd(head , 4);
    head = insertAtEnd(head , 5);

    traversal(head);
    // head = reverse(head);
   head =  removeNthFromEnd(head , 1);
    traversal(head);


     return 0;
}