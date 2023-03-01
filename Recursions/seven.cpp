#include <bits/stdc++.h>
using namespace std;

// void  sort( stack<int> s)
// {
//    //Your code here
//    vector<int> v;

//  while(!s.empty())
// {
//    v.push_back(s.top());
//     s.pop();
// }

// sort(v.begin() , v.end());
//  for(int &i : v)
//  {
//    cout<<i<<" ";
//     s.push(i);
//  }
// cout<<endl;
// while(!s.empty())
// {
//     cout<<s.top()<<" ";
//     s.pop();
// }

// }

void sorted_stack(int x, stack<int> &s)
{
   if (s.size() == 0 || x > s.top())
   {
      s.push(x);
   }
   else
   {
      int a = s.top();
      s.pop();
      sorted_stack(a, s);
      s.push(a);
   }
}

void sort(stack<int> &s)
{
   if (s.size() > 0)
   {
      int x = s.top();
      s.pop();
      sort(s);
      sorted_stack(x, s);
      // while (!s.empty())
      // {
      //    cout << s.top() << " ";
      //    cout << endl;
      // }
   }
}

int main()
{
   stack<int> s;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      s.push(x);
   }

   sort(s);

   //   stack<int> st =   sort(s);
   //   while(!st.empty())
   //   {
   //    cout<<st.top()<<" ";
   //    cout<<endl;
   //   }

   return 0;
}