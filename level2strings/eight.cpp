#include<bits/stdc++.h>
using namespace std;
//not completed
   string removeConsecutiveCharacter(string S)
    {
        // code here
        int len = S.length();
        for(int i =1 ; i<len ; i++)
        {
            if(S[i]==S[i-1])
            {
            S[i-1] = '#';
            }
        }
        S.erase(remove(S.begin() , S.end() , '#') , S.end());
        return S;
    }

int main(){ 

    string s = "aabb";
    string result = removeConsecutiveCharacter(s);
    cout<<result;
    return 0;

}