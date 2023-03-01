#include<bits/stdc++.h>
using namespace std;

 string revStr(string S) {
        // code here
        reverse(S.begin() , S.end());
        return S;
    }

int main(){ 
    string str = "GeeksforGeeks";
    string s = revStr(str);
    cout<<s;
     return 0;
}