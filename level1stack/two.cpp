#include<bits/stdc++.h>
using namespace std;

queue<int> rev(queue<int> q)
{
  queue <int> ans;
  stack<int> s;
  while(!q.empty())
  {
  s.push(q.front());
  q.pop();
  }
  
  while(!s.empty())
  {
    ans.push(s.top());
    s.pop();
  }
  return ans;


}

int main(){ 
    queue<int> q ;
    int n;
    cin>>n;
    for(int i=0 ;i <n ; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    queue<int> result = rev(q);

    while(!result.empty())
    {
        cout<<result.front()<<" ";
        result.pop();
    }
     
     return 0;
}