#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

void traversal(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode *insertAtEnd(ListNode *head, int val)
{
    ListNode *n = new ListNode(val);
    ListNode *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
    n->next = NULL;
    return head;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
   ListNode*p1 = list1;
   ListNode*p2 = list2;

   ListNode*dummyNode = new ListNode(-1);
   ListNode*p3 = dummyNode;
   while(p1!=NULL && p2!=NULL){
    if(p1->data<p2->data){
        p3->next = p1;
        p1 = p1->next;
    }else{
        p3->next = p2;
        p2 = p2->next;
    }
     p3=p3->next;
   }

   while(p1!=NULL){
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
   }
   while(p2!=NULL){
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
   }

   return dummyNode->next;

}

ListNode* mergeTwoListsRecursion(ListNode* list1, ListNode* list2) {
    if(list1->data < list2->data){
        
    }
 }

int main()
{
    ListNode *head1 = new ListNode(1);
    head1 = insertAtEnd(head1, 1);
    head1 = insertAtEnd(head1, 2);
    head1 = insertAtEnd(head1, 3);
    head1 = insertAtEnd(head1, 4);
    traversal(head1);

    ListNode *head2 = new ListNode(1);
    head2 = insertAtEnd(head2, 3);
    head2 = insertAtEnd(head2, 5);
    head2 = insertAtEnd(head2, 6);
    head2 = insertAtEnd(head2, 8);
    traversal(head2);

    ListNode *res = mergeTwoLists(head1, head2);
    cout << res->data << endl;

    return 0;
}