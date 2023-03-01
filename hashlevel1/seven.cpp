#include<bits/stdc++.h>
using namespace std;

//Brute force solution
//   int getPairsCount(int arr[], int n, int k) {
//     int count = 0;
//         for(int i=0 ; i<n-1 ; i++)
//         {
//             for(int j=i+1 ; j<n ; j++)
//             {
//                 if(arr[i]+arr[j]==k)
//                 {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }

// Hash map solution
  int getPairsCount(int arr[], int n, int k) {
    unordered_map<int , int> m;
    int count = 0;
    for(int i=0 ; i<n ; i++)
    {
       if(m.find(k-arr[i]) != m.end())
       {
        count+=m[k-arr[i]];
        cout<<"count: "<<count<<endl;
       }
      m[arr[i]]++;
    }

    for(auto &i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return count;
    }

int main(){ 
    int arr[] = {1,5,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int result = getPairsCount(arr , n , k);
    cout<<result;

     return 0;
}