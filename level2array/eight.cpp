#include <bits/stdc++.h>
using namespace std;

// vector<int> st;
// int top = -1;
// stack<int> st;
// Function to push an integer into the stack.
// void push(int x)
// {
//     // Your Code
//    top++;
    // st.push_back(x);
// }

// // Function to remove an item from top of the stack.
// int pop()
// {
//     if (top == -1)
//     {
//         return top;
//     }

//     int x = st[top];
//     st.pop_back();
//     top--;
//     return x;
// }

stack<int> st;

void push(int x)
{
    // Your Code
    st.push(x);
}

// Function to remove an item from top of the stack.
int pop()
{
    if (st.empty())
    {
        return -1;
    }

    int x = st.top();
    st.pop();
    return x;
}
int main()
{
    int r = pop();
    push(4);
    push(5);
    int a = pop();
    cout << r << " " << a;
    return 0;
}