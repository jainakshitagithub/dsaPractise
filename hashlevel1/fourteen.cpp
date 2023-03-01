#include<bits/stdc++.h>
using namespace std;

    int findUnique(int a[], int n, int k) {
        unordered_map<int,int> m;
        for(int i=0 ; i<n ; i++)
        {
            m[a[i]]++;
        }
        for(auto &it : m)
        {
            if( (it.second  % k) != 0)
            return it.first;
        }

        return 0;
    }

int main(){ 
    int a[] = {6,2,6,6,4,4,6,6,6,2,2,8,4,2,4,4,8,4,4,2,4,8,8,8,2,4,4,8,4,4,6};
    int n = 31;

    int result = findUnique(a , n , 6);
    cout<<result;
     return 0;
}