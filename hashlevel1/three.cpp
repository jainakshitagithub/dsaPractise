#include<bits/stdc++.h>
using namespace std;

   int getOddOccurrence(int arr[], int n) {
        unordered_map<int , int> m;
        for(int i=0 ; i<n ; i++)
        {
            m[arr[i]]++;
        }
        for(auto &i : m)
        {
            if(i.second %2 !=0)
            {
                return i.first;
            }
        }
        return -1;
    }

int main(){ 
    int arr[] = {1, 2, 3, 2, 3, 1, 3};

    int n = sizeof(arr)/sizeof(arr[0]);
    int result = getOddOccurrence(arr , n);
    cout<<result;

     return 0;
}