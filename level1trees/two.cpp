#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// int minValue(Node* root) {
// if(root==NULL)return -1;
// if(root->left!=NULL)
// {
// root->data = minValue(root->left);
// }
// return root->data;

// }


// int countLeaves(Node* root , int count = 0)
// {
//   if(root==NULL)return count;
//        count = countLeaves(root->left , count);
//        count = countLeaves(root->right , count);
//        if(root->left==NULL && root->right==NULL)
//        count++;
//        return count;

// }

int countLeaves(Node* root)
{
 int x,y;
 if(!root)return 0;
 x = countLeaves(root->left);
 y = countLeaves(root->right);
 if(!root->left && !root->right) 
 {
   return x+y+1; 
 }
 return x+y;

}

//  int countNonLeafNodes(Node* root ) {
//         // Code here
//         int x , y;
//         if(root == NULL)return 0;
//         x = countNonLeafNodes(root->left );
//         y = countNonLeafNodes(root->right );
//         if(root->left ==NULL &&  root->right ==NULL)
//        return 0;
//        else
//        return x+y+1;

//         return x+y;
//     }

      int countNonLeafNodes(Node* root) {
       // Code here
       if(root==NULL)
       return 0;

       int l = countNonLeafNodes(root->left);
       int r = countNonLeafNodes(root->right);
       
       if(root->left ==NULL &&  root->right ==NULL)
       return 0;
       else
       return l + r +1;
   }

void inOrder(Node *root )
{
    if(root!=NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int getSize(Node* node  )
{
   if(node==NULL)return 0;
   int l = getSize(node->left);
   int r = getSize(node->right);
   return l+r+1;
}


long int sumBT(Node* root)
{
    if(root==NULL)return 0;
     long int l= sumBT(root->left);
    long int r=  sumBT(root->right);
     return l + r + root->data;
}



int main(){ 
    //  Node *root = NULL;
    Node *root = new Node(5);
   root->left = new Node(4);
   root->left->left  =new Node(3);
   root->left->left->left  =new Node(1);

   root->right = new Node(6);
   root->right->right = new Node(7);



     inOrder(root);
     cout<<endl;
    // int res = minValue(root);
    // int res = countLeaves(root);
    int res = countNonLeafNodes(root);
    // int  res = getSize(root);
    // int  res = sumBT(root);

    cout<<"Result is : "<<res;


     return 0;
}