#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> findSpiral(Node *root)
{
    //Your code here

    vector<int> result;
    if(root==NULL)return result;

    stack<struct Node*> s1;
    stack<struct Node*> s2;

    s1.push(root);

    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            Node*temp = s1.top();
             s1.pop();
            result.push_back(temp->data);
            if(temp->right)
            s2.push(temp->right);
            if(temp->left)
            s2.push(temp->left);
        }
        while(!s2.empty())
        {
             Node*temp = s2.top();
             s2.pop();
            result.push_back(temp->data);
            if(temp->left)
            s1.push(temp->left);
            if(temp->right)
            s1.push(temp->right);
        }
    }
    return result;

}

int main(){ 
    Node*root = new Node(1);
    Node*p1 = new Node(2);
    Node*p2 = new Node(3);
    Node*p3 = new Node(7);
    Node*p4 = new Node(6);
    Node*p5 = new Node(5);
    Node*p6 = new Node(4);

    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    vector<int> v = findSpiral(root);

    for(int &i : v)
    {
        cout<<i<<" ";
    }


     return 0;
}