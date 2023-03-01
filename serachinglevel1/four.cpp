#include<bits/stdc++.h>
using namespace std;

    int lastIndex(string s) 
    {
        int index = -1;
        for(int i =0 ; i<s.length() ; i++)
        {
            if(s[i]=='1')
            {
                index = i;
            }
        }
        return index;
    }

int main(){ 
    string S = "00001";
    int ans = lastIndex(S);
    cout<<ans;

     return 0;
}