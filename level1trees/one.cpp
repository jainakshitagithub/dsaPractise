#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
void inOrderutil(Node *root , vector<int> &res)
{
     if(root!=NULL)
     {
          inOrderutil(root->left , res);
          res.push_back(root->data);
          inOrderutil(root->right , res);
     }
}

vector<int> inOrder(Node *root)
{
     vector<int> res;
     inOrderutil(root , res);
     return res;
}

int main(){ 
     Node*root = new Node(4);
     root->left = new Node(1);
     root->left->left = new Node(5);
     root->left->right = new Node(2);
     root->right = new Node(6);

     inOrder(root);

     vector<int> v = inOrder(root);
     for(int &i: v)
     {
          cout<<i<<" ";
     }
     cout<<endl;

     return 0;
}