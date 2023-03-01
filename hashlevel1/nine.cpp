#include<bits/stdc++.h>
using namespace std;

    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        unordered_map<int , int> m1;
        int count = 0;
        for(int i= 0 ;i<n ; i++)
        {
            m1[arr2[i]]++;
        }

     

        for(int i=0 ; i<m ; i++)
        {
            if(m1.find(x-arr1[i])!=m1.end())
            {
                count++;
            }
        }
        return count;
    } 

int main(){ 
   int arr1[] =  {1, 2, 3, 4};
   int arr2[] = {5, 6, 7, 8};

   int m = sizeof(arr1)/sizeof(arr1[0]);
   int n = sizeof(arr2)/sizeof(arr2[0]);

    int result = countPairs(arr1 , arr2 , m  , n , 5);
    cout<<result;

     return 0;
}