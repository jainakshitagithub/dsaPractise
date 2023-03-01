#include<bits/stdc++.h>
using namespace std;

// int search(int arr[], int N, int X)
//     {
        
//         // Your code here
//         int low = 0;
//         int high = N-1;
//         sort(arr , arr+N);
//         while(low<=high)
//         {
//             int mid = (high+low)/2;
//             if(arr[mid] == X)
//             {
//                 return mid;
//             }
//             if(arr[mid]>X)
//             {
//                 high = mid-1;
//             }
//             else{
//                 low = mid+1;
//             }
//         }
//         return -1;
//     }

int search(int arr[] , int N , int X)
{
    for(int i = 0 ; i<N ; i++)
    {
        if(arr[i] == X)
        {
            return i;
        }
    }
        return -1;
}

int main(){ 
   int n = 4;
   int arr[] = {1,2,3,4};
   int x = 3;
   int r = search(arr , n , x);
   cout<<r;
     return 0;
}