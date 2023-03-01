#include<bits/stdc++.h>
using namespace std;

string delAlternate(string S) {
        // code here
            string s;
        for(int i = 0 ; i<S.length() ; i+=2)
        {
               s.push_back(S[i]);
        }
        return s;

    }

int main(){ 
    string s = "Geeks";
     string str = delAlternate ( s);
     cout<<str;
     return 0;
}