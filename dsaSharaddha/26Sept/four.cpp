#include<bits/stdc++.h>
using namespace std;

 int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> m;
        int maxString = 0;
        int i=0 , j = 0;

        while(j<s.length())
        {
            m[s[j]]++;
            if(m.size()==j-i+1)
            {
                maxString = max(maxString , j-i+1);
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
            }
            j++;
        }
        return maxString;
    }

int main(){ 
    string s = "atbb";
    int ans = lengthOfLongestSubstring(s);
    cout<<ans<<endl;
     return 0;
}