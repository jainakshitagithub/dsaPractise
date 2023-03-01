#include<bits/stdc++.h>
using namespace std;

string firstRepChar(string s)
{
    //code here.
    unordered_map<char , int> m;
    string ans;
    for(int i=0 ; i<s.length() ; i++)
    {
        m[s[i]]++;
        if(m[s[i]]>1)
        {
             ans += s[i];
            return ans;
        }
    }
     ans = "-1";
    return ans;
}

int main(){ 
    string s = "geeksforgeeks";
    string result = firstRepChar(s);
    cout<<result;
     return 0;
}