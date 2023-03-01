#include<bits/stdc++.h>
using namespace std;

  string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    string ans = "";
        for(int i=0 ; i<strs[0].length() ; i++)
        {
            char ch = strs[0][i];
            bool match = true;

            for(int j =1 ; j<n ; j++)
            {
                if(ch != strs[j][i] || strs[j].size()<i)
                {
                    match = false;
                    break;
                }
            }
            if(match==false)
                break;
            else 
                ans.push_back(ch);
            
        }
        return ans;
    }


int main(){ 
    vector<string> arr = {"flower","flow","flight"};
    string ans = longestCommonPrefix(arr);
    cout<<ans<<endl;
     return 0;
}