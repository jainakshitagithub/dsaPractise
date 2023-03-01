#include<bits/stdc++.h>
using namespace std;

 int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int i=0 , j=0 , maxFreq = 0 , maxLen = 0;
        while(j<s.length())
        {
            m[s[j]]++;
            maxFreq = max(maxFreq , m[s[j]]);
            if(j-i+1-maxFreq < k)
            {
            maxLen = max(j-i+1,maxLen);
            j++;
            }
            else if(j-i+1-maxFreq == k)
            {
                maxLen = max(j-i+1,maxLen);
                j++;
            }
            else if(j-i+1-maxFreq > k){
                while(j-i+1-maxFreq >k)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    m.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxLen;
    }

int main(){ 
    string s = "BBBB";
    int k = 2;
    int ans = characterReplacement(s , k);
    cout<<ans<<endl;
     return 0;
}