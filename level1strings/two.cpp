#include<bits/stdc++.h>
using namespace std;

// ASCII value of uppercase alphabets – 65 to 90. ASCII value of lowercase alphabets – 97 to 122

 string toLower(string S) {
        // code here
        for(int i =0 ; i<S.length() ; i++)
        {
       S[i] = tolower( S[i]);
        }
        return S;
    }

int main(){ 
    string str = "LMNOppQQ";
    string s =  toLower( str) ;
    cout<<s;
     return 0;
}