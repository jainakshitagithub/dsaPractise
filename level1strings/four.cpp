#include<bits/stdc++.h>
using namespace std;

  string modify (string s)
    {
        //code here.
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return s;
    }

int main(){ 
    string s = "geeks  for geeks";
     string str = modify ( s);
     cout<<str;
     return 0;
}