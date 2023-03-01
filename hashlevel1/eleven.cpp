#include<bits/stdc++.h>
using namespace std;

string ReverseSort(string str){
   sort(str.begin(), str.end(), greater<char>());
   return str;
}

int main(){ 
    string str = "geeks";
    string ans = ReverseSort(str);
    cout<<ans;
     return 0;
}