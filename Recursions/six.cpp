#include<bits/stdc++.h>
using namespace std;

long long power(int N,int R)
    {
       //Your code here
       
         long long int mod = 1000000007;
       if(R==0){
           return 1;
       }
       else if(R==1){
            return N;
       }
       else{
       long long temp = power(N,R/2);
       temp = (temp*temp)%mod;
       if(R%2 == 0){ 
           return temp;
       }
       else{
           return (temp*N)%mod;
       }

       }
       
    }

int main(){ 

long long a = power(12 ,21);
cout<<a;
     return 0;
}