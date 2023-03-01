
#include <bits/stdc++.h>
using namespace std;

// void deleteMid(stack<int>&s, int sizeOfStack)
//     {
//         // code here..
//         vector<int> v;
//         int num = ceil(sizeOfStack / 2);

//         int remain = sizeOfStack - num;
//         for(int i=0 ; i<remain ; i++ )
//         {
//             v.push_back(s.top());
//             s.pop();
//         }
//         s.pop();
//         for(int i = v.size()-1 ; i>=0 ; i--)
//         {
//             s.push(v[i]);
//         }

//         while(!s.empty())
//         {
//             cout<<s.top()<<" ";
//             s.pop();
//         }
//     }

// Delete mid element through recursion


void deleteMid(stack<int> &s, int sizeOfStack, int curr = 0)
{
    // code here..
   if(s.empty() || curr==sizeOfStack)
   return;

   int x = s.top();
   s.pop();
   deleteMid(s , sizeOfStack , curr+1);
   
   if(curr != (sizeOfStack/2))
   {
    cout<<x<<" "<<curr<<endl;
    s.push(x);
   }


}

int main()
{
    stack<int> s;
    // s.push(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    deleteMid(s, 4);

    return 0;
}