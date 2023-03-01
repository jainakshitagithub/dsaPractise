#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s , int ind = 0 , int sum = 0) {
    // Write your code here
    if(s.length()<=ind)
    return sum;

    if(s[ind]=='I')
    sum += 1;
    else if(s[ind]=='V')
    sum+=5;
    else if(s[ind]=='X')
    sum+=10;
    else if(s[ind]=='L')
    sum+=50;
    else if(s[ind]=='C')
    sum+=100;
    else if(s[ind]=='D')
    sum+=500;
    else if(s[ind]=='M')
    sum+=1000;

    return romanToInt(s , ind+1 , sum);
}

int main(){ 
    int T ;
    cin>>T;
    for(int i=0 ; i<T ; i++)
    {
        string x;
        cin>>x;
    int result = romanToInt(x);
    cout<<result<<endl;
    }
     return 0;
}