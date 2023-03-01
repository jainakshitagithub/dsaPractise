#include<bits/stdc++.h>
using namespace std;

 string modify (string s)
        {
            //code here.
            vector<int> v;
            for(int i =0 ; i<s.length() ; i++)
            {
                if(s[i]=='a' || s[i] == 'e' || s[i]=='i'||  s[i]=='o' || s[i]=='u')
                {
               v.push_back(i); 
                }
            }
            int n = v.size();
            for(int i =0 ; i<n/2 ; i++)
            {
                swap(s[v[i]] , s[v[n-i-1]]);
            }
            return s;
        }

int main(){ 
     string s = "practice";
    string result = modify(s);
    cout <<"Result : "<< result;
     return 0;
}