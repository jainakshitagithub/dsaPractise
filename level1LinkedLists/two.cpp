#include<bits/stdc++.h>
using namespace std;


// class Node{
//     int data;
//     Node * next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

     int getCount(struct Node* head){
    
        int i =0;
        while(head->next != NULL)
        {
            i++;
            head = head->next;
        }        
        return i;
    }



int main(){ 
     return 0;
}