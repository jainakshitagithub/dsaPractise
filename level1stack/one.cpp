#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
     Node* left;
     Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int>ans;
vector<int>solve(Node*root)
{
  if(root==NULL)
  return ans;
  ans.push_back(root->data);
  solve(root->left);
  solve(root->right);
  return ans;
}

vector <int> preorder(Node* root)
{
ans.clear();
return solve(root);
}
int main(){ 
    Node*root =  new Node(7);
    root->left = new Node(2);
    root->right = new Node(1);
    root->left->left = new Node(0);
    root->left->right = new Node(4);

    vector<int> v = preorder(root);
    for(int &i : v)
    {
        cout<<i<<" ";
    }




     return 0;
}