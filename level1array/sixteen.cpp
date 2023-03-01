#include<bits/stdc++.h>
using namespace std;

 bool IsPerfect(int a[],int n)
    {
        // Complete the function
        for(int i =0 ; i<n ; i++){
        if(a[i]!=a[n-i-1])
        {
            return false;
        }
        }
        return true;
    }

int main(){ 
   int  Arr[] = {1, 2, 3, 0, 1};
   bool a = IsPerfect(Arr , 5);
   cout<<a;
     return 0;
}