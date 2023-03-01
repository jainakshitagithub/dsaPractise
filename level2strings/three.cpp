#include <bits/stdc++.h>
using namespace std;
//not completed
int remAnagram(string str1, string str2)
{
   sort(str1.begin() , str1.end());
   sort(str2.begin() , str2.end());
   for(int i  = 0 ; i<str1.length() ; i++)
   {
    
   }

}

int main()
{
    string s1 = "basgadhbfgvhads";
    string s2 = "sjdhgvbjdsbhvbvd";

    // string s1 = "cddgk";
    // string s2 = "gcd";
    int a = remAnagram(s1, s2);
    cout << a;
    return 0;
}