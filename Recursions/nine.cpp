#include<bits/stdc++.h>
using namespace std;

  int josephus(int n, int k)
    {
       //Your code here
        if(n==1)
        return 0;

        return (josephus(n-1 , k) + k ) % n;
    }

//if one - based indexing
      int josephus(int n, int k)
    {
    if (n == 1) //base case
       return 1;
    else
  /* The position returned by josephus(n - 1, k) is adjusted because the 
       recursive call josephus(n - 1, k) considers the original position  
       k%n + 1 as position 1 */
        return (josephus(n - 1, k) + k-1) % n + 1;
    }

int main(){ 
    int n,k;
    cin>>n;
    cin>>k;
    int a = josephus(n , k);
    cout<<a;
     return 0;
}