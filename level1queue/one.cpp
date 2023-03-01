#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

    public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void push(int val)
    {
        Node *n = new Node(val);
        if (n == NULL)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        if (front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }

    int pop()
    {
        Node *temp;
        int ans;
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        else
        {
            temp = front;
            front = front->next;
            ans = temp->data;
            delete (temp);
            return ans;
        }
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    for(int i=0 ; i<5 ; i++)
    {
        int a = q.pop();
        cout<<a<<" ";
    }

    return 0;
}