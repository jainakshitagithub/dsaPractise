#include<bits/stdc++.h>
using namespace std;
//Calculate n raised to the power p 

int calPower(int n , int p)
{
    if(p==0)return 1;

    
    int prevPower = calPower(n , p-1);
    return n*prevPower;
}

int main(){ 
    int result = calPower(2 , 2);
    cout<<result;
     return 0;
}