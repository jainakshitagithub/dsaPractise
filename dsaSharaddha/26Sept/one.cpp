#include<bits/stdc++.h>
using namespace std;

   bool isPalindrome(string s) {
     string str ;
     s.erase(remove(s.begin(), s.end(), ' '), s.end());
     transform(s.begin() , s.end() , s.begin(),::tolower);

     for(int i=0;i<s.length();i++)
     {
        if(isalpha(s[i]))
        str+=s[i];
        else if(isdigit(s[i]))
        str+=s[i];
     }

     int l = 0;
     int r = str.length()-1;
    cout<<str<<endl;
     while(l<r)
     {
        if(str[l]!=str[r])
        return false;

            l++;r--;
     }
     return true;
    }

int main(){ 
    string  s = "0P";
    bool a = isPalindrome(s);
    cout<<a<<endl;
     return 0;
}