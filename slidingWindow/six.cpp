#include<bits/stdc++.h>
using namespace std;

int longestSubString(string s)
{
    int i=0 , j = 0 , maxSize = 0;
    unordered_map<char , int> m;
    while(j<s.length())
    {
        m[s[j]]++;
        if(m.size()==j-i+1)
        {
            maxSize = max(maxSize , j-i+1);
            j++;
        }
        else if(m.size()<j-i+1)
        {
            while(m.size()<j-i+1)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                m.erase(s[i]);
                i++;
            }
            j++;
        }
    }
        return maxSize;
}
int main(){ 
     string s = "pwwkew";
    int res = longestSubString(s);
    cout<<res<<endl;

     return 0;
}