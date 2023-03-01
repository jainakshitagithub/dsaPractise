#include<bits/stdc++.h>
using namespace std;

string removeCharacters(string S) 
	{
	    // Your code goes here
        string s;
        for(int i =0 ; i<S.length() ; i++)
        {
            if(isdigit(S[i]))
            {
                s.push_back(S[i]);
            }
        }
        return s;
	}

int main(){ 
    string s = "akshflks12948lafdl@&$*(@";
    string str = removeCharacters(s);
    cout<<str;
     return 0;
}