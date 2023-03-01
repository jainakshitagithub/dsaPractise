#include <bits/stdc++.h>
using namespace std;

int strstr(string s, string x)
{
     //Your code here
     int found = s.find(x);
     if(found!=string::npos)
     {
        return found;
     }
     return -1;
}

int main()
{
    string str = "GeeksForGeeks";
    string x = "For";
    int result = strstr(str, x);
    cout << result;
    return 0;
}