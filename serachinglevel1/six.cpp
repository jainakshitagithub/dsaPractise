#include<bits/stdc++.h>
using namespace std;

//brute force approach
    // int findOnce(int arr[], int n)
    // {
    //     int ans = 0;
    //    for(int i=0;i<n;i++){
    //        ans^=arr[i];
    //    }
    //    return ans;
    // }

     int findOnce(int arr[], int n)
    {
          int low = 0 ;
          int high = n - 2;
          while(low<=high)
          {
            int mid = (low+high)/2;
            if(arr[mid]==arr[mid^1])
            {
            cout<<arr[mid]<<" "<<arr[mid^1]<<endl;
            low  = mid + 1;
            }
            else
            high = mid - 1;
          }  
          return arr[low];
    }

int main(){ 
    int arr[] =  {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = findOnce(arr , n);
    cout<<result;

     return 0;
}