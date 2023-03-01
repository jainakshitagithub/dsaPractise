#include<bits/stdc++.h>
using namespace std;

   int firstElementKTime(int a[], int n, int k)
    {
        return 0;
    }

int main(){ 
    int a[] = {1,7,4,3,4,8,7};
 int size =  sizeof(a)/sizeof(a[0]);
 int k;
 cin>>k;
 int result = firstElementKTime(a , size , k);
 cout<<"Result: "<<result<<endl;
     return 0;
}