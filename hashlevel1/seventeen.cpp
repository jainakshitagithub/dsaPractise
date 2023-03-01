#include<bits/stdc++.h>
using namespace std;

string reverseString(string s)
{
    //code here.
   
    set<char> ss;
    string ans;

    // s.erase(' ');
    for(int i=0 ; i<s.length() ; i++)
    {
        ss.insert(s[i]);
    }
    for(auto it : ss)
    {
        cout<<it<<" ";
    }
    return s;
}
int main(){ 
    string S = "GEEKS FOR GEEKS";
    string ans = reverseString(S);
    cout<<ans; 
     return 0;
}