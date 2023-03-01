#include<bits/stdc++.h>
using namespace std;

int isPossible (string S)
{
    // your code here
    int counter = (S.length()+1)/2;
    for(int i=0 ; i<S.length()/2 ; i++)
    {
        if(S[i]!=S[counter])
        return 0;
        counter++;
    }
    return 1;

}
int main(){ 
    string s ="geeksogeeks";
    int result = isPossible(s);
    cout<<result;
     return 0;
}