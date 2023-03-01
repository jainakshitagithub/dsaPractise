#include<bits/stdc++.h>
using namespace std;

   int heapHeight(int N, int arr[]){
    int c = 1 , count = 0;
    for(int i=1 ; i<N ; i+=c)
    {
        count++;
        if(i%2 != 0 )
        c = c * 2;
    }
    return count;
   };
int main(){ 
    int arr[] = {3, 6, 9, 2, 15, 10, 14, 5, 12};
    int n = sizeof(arr)/sizeof(int);
    int res = heapHeight(n , arr);
    cout<<res<<endl;
     return 0;
}