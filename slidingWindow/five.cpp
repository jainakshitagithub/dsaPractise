#include<bits/stdc++.h>
using namespace std;

int longestSubUniqueChar(string s , int k)
{
    int i = 0 , j = 0 , maxSize = 0;
    unordered_map<char , int> m;

    while(j<s.length())
    {
        m[s[j]]++;
        if(m.size()<k)
        j++;
        else if(m.size() == k)
        {
            maxSize = max(maxSize , j-i+1);
            j++;
        }
        else if(m.size()>k)
        {
            while(m.size()>k)
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
    string s = "aabacbebebe";
    int k ;
    cin>>k;
    int res = longestSubUniqueChar(s , k);
    cout<<res<<endl;

     return 0;
}