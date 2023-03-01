#include<bits/stdc++.h>
using namespace std;

	string firstAlphabet(string S)
	{
	    // Your code goes here
        string result;
        result = result + S[0];
        for(int i =0 ; i<S.length() ; i++)
        {
            if(S[i] == ' ')
            {
                result = result + S[i+1];
            }
           
        }
        return result;

	}
int main(){ 
    string s = "geeks for geeks";
    string result = firstAlphabet(s);
    cout<<result;
     return 0;
}