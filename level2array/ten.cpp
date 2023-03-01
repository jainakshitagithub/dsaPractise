#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int front = 0;
int rear = 0;

void push(int x)
{
    // Your Code
  if(front==0 && rear==0)
  {
    front++;
    rear++;
    arr[rear] = x;
  }
  else {
    rear++;
    arr[rear] = x;
  }
}

// Function to pop an element from queue and return that element.
int pop()
{
    // Your Code
    int element;
    if (front == 0 && rear == 0)
    {
        return -1;
    }
    else if (front == rear)
    {
        element = arr[front];
        front = 0;
        rear = 0;
    }
    else
    {
        element = arr[front];
        front++;
    }
    return element;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            push(y);
        }
        else
        {
            int r = pop();
            cout << r;
        }
    }

    return 0;
}