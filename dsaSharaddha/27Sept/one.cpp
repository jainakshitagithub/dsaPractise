#include<bits/stdc++.h>
using namespace std;

//Longest common Prefix
  string longestCommonPrefix(vector<string>& strs) {
    string res = "";
    string temp = strs[0];
        for(auto it : strs)
        {
            cout<<it[2];
        }
        return res;
    }
int main(){ 
    vector<string> strs = {"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout<<ans;
     return 0;
}