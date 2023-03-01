#include<bits/stdc++.h>
using namespace std;


class StackNode{
    public:
    int data;
    StackNode*next;

    StackNode(int val)
    {
        data = val;
        next = NULL;
    }

};

class MyStack{
    private:
    StackNode*top;

    public:
    void push(int);
    int pop();
    MyStack()
    {top==NULL;};
};


void MyStack ::  push(int x)
{

StackNode *n = new StackNode(x);
if(top == NULL)
{
    top = n;
    return;
}
n->next = top;
top = n;
}

int MyStack ::  pop()
{
    int x;
    if(top == NULL)
    return -1;

    StackNode *temp = top;
    top = temp->next;
    x = temp->data;
    delete(temp);
    return x;
}

int main(){ 
    MyStack *sq = new MyStack();

    int x;
    x = sq->pop();
    cout<<x<<" ";
    sq->push(4);
    sq->push(5);
    x = sq->pop();
    cout<<x<<" ";
    x = sq->pop();
    cout<<x<<" ";
     x = sq->pop();
    cout<<x<<" ";
     return 0;
}