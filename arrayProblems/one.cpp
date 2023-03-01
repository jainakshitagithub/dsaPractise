#include<bits/stdc++.h>
using namespace std;

//Not completed

//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack <int> st;
    for(int i = 0 ; i<n ; i++)
    {
        st.push(arr[i]);
    }
    return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    int arr[5];

     while(!s.empty())
   {
    cout<<"while condition"<<endl;
    int i = 0;
    arr[i] = s.top();
    s.pop();
    i++;
   }
cout<<1<<endl;
   for(int i = 0 ; i<5 ; i++)
   {
    cout<<arr[i]<<endl;
    int min = *min_element(arr + i , arr+5);
    // cout<<min<<" ";
   }



}

int main(){ 
    int n;
    cin>>n;
    int a[n] = {};
    for(int i =0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        a[i] = x;
    }
    stack<int> s = _push(a , n);
    _getMinAtPop(s);
  
     return 0;
}