#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int N, int K) 
    { 
     map<int , int> m;

     for(int i=0 ; i<N ; i++)
     {
         m[arr[i]]++;
     }
     
    for(auto &it : m)
    {
        if(it.second == K)
        return it.first;
    }
     
     return -1;

     
    }
int main(){ 
     return 0;
}