#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{

if(n<2)return 1;

    int a = fib(n-1) + fib(n-2);
    return a;
}
int main(){ 
    int r = fib(5);
    cout<<r;
     return 0;
}