#include<bits/stdc++.h>
using namespace std;

  int findDiff(int arr[], int n) {
        unordered_map <int , int> m;
        for(int i=0 ; i<n ; i++)
        {
            m[arr[i]]++;
        }
            int min = INT_MAX;
            int max = INT_MIN;
        for(auto &it : m)
        {
            if(it.second>max)
            {
            max = it.second;
            }
            if(it.second<min)
            {
            min = it.second;
            }
        }
        return max-min;
    }

int main(){ 
    int arr[] = {1,2,2};
    int ans = findDiff(arr , 3);
    cout<<ans;
     return 0;
}