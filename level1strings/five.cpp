#include<bits/stdc++.h>
using namespace std;

 string conRevstr(string S1, string S2) {
        // code here
        string s = S1 + S2;
     //    S1.append(S2); //doensn't returns anthing
     //    strcat(S1, S2); //doensn't returns anthing
        reverse(s.begin() , s.end());
        return s;
    }

int main(){ 
     string s1 = "Geeks";
     string s2 = "forGeeks";
 string str =  conRevstr( s1,  s2) ;
 cout<<str;

     return 0;
}