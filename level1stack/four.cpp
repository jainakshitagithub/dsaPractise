#include<bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    int c1 ,c2;
    if(s.size()%2 != 0)
    s.pop();

    while(!s.empty())
    {
       c1=s.top();
       s.pop();
       c2=s.top();
       s.pop();
       if(abs(c1-c2)!=1){
           return 0;
    }
    }
    return 1;
}

int main(){ 
    stack<int> s;
    for(int i = 0 ; i<7 ; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
cout<<s.size()<<endl;
    bool a = pairWiseConsecutive(s);
    cout<<a;
     return 0;
}