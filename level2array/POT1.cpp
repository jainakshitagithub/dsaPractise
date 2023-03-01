#include<bits/stdc++.h>
using namespace std;

 char firstRep (string s)
    {
        //code here.
        int n = s.length();
        for(int i =0 ; i<n ;i++)
        {
            for(int j =i+1 ; j<n ; j++)
            {
                if(s[i]==s[j])
                {
                    return s[i];
                }
            }
        }
        return '#';
    }

int main(){ 
    string s =  "abcde";
    char r = firstRep(s);
    cout<<r;
     return 0;
}