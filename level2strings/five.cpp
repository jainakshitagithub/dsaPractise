#include<bits/stdc++.h>
using namespace std;


//Mehthod 1 => O(n^2)
 bool isIsogram(string s)
    {
        //Your code here
        for(int i =0 ; i<s.length() ; i++)
        {
        int count = 0;
            for(int j = 0 ; j<s.length() ; j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                if(count>1)
                {
                    return false;
                }
            }
        }
        return true;
    }

int main(){ 
    string s = "macching";
    bool a = isIsogram(s);
    cout<<a;
     return 0;
}