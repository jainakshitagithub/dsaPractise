#include<bits/stdc++.h>
using namespace std;

	string removeVowels(string S) 
	{
	    // Your code goes here
        string s;
        for(int i =0 ; i<S.length() ; i++)
        {
            if(!(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'))
            {
                s.push_back(S[i]);
            }
        }
        return s;
	}

int main(){ 
    string  S = "what is your name ?";
    string str = removeVowels(S);
    cout<<str;
     return 0;
}