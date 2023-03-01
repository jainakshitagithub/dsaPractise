#include<bits/stdc++.h>
using namespace std;

//iterative approach
// string removeDuplicate(string &s)
// {
//     // Write your code here
//     int n = s.length();
//     for(int i=0 ; i<n-1 ; i++)
//     {
//         if(s[i]==s[i+1])
//         s[i] = '#';
//     }

//     s.erase(remove(s.begin() ,s.end() , '#') , s.end());
//     return s;
// }

//Recursive Approach
string removeDuplicate(string &s , int ind = 0)
{
    // Write your code here
    if(s.length()-1<=ind)
    {
    s.erase(remove(s.begin() ,s.end() , '#') , s.end());
    return s;
    }

    if(s[ind]==s[ind+1])
    s[ind] = '#';

    return removeDuplicate(s , ind+1);

    
   
}

int main(){ 
    string s = "aazbbby";
    string result = removeDuplicate(s);
    cout<<result<<endl;
     return 0;
}