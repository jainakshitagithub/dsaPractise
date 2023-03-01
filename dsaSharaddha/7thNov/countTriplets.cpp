#include <bits/stdc++.h>
using namespace std;

// This is O(n3);
//  long long countTriplets(long long arr[], int n, long long sum)
//  {
//      long long count = 0;
//      for(int i=0 ; i<n ; i++){
//          for(int j =i+1; j<n ; j++){
//              for(int k=j+1; k<n ; k++){
//                  if(arr[i] + arr[j] + arr[k]<sum){
//                      cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                      count++;
//                  }
//              }
//          }
//      }
//      return count;
//  }

long long countTriplets(long long arr[], int n, long long sum)
{


     sort(arr,arr+n);

     long long ans=0;

     for(int i=0;i<n;i++){

         int start=i+1;

         int end=n-1;

         while(start<end){

             int s=arr[i]+arr[start]+arr[end];

             if(s<sum){

                 ans+=end-start;

                 start++;

             }

             else

             end--;

         }

     }

     return ans;
}

int main()
{
    long long arr[] = {30, 8, 23, 6, 10, 9, 31, 7, 19, 20, 1, 33, 21, 27, 28, 3, 25, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    long long ans = countTriplets(arr, n, 86);
    cout << ans;
    return 0;
}