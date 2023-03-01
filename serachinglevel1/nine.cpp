#include<bits/stdc++.h>
using namespace std;

  string removeConsonants(string s){
    string ans;
    for(int i=0 ; i<s.length() ; i++)
    {
         if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'
    ||s[i] == 'A'|| s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U' ){
        ans = ans + s[i];
    }
    }
    if(ans.length()==0)
    ans = ans+"No Vowel";

    return ans;
    }

int main(){ 
    string s = "rrty";
    string ans = removeConsonants(s);
    cout<<ans<<endl;

     return 0;
}