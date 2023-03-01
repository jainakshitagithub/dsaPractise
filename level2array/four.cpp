#include<bits/stdc++.h>
using namespace std;

  int largest(vector<int> &arr, int n)
    {
        int max = *max_element(arr.begin() , arr.end());
        return max;
    }

int main(){ 
    vector<int> a;
    int n ;
    cin>>n;
    for(int i =0 ; i<n ; i++)
    {
        int x ;
        cin>>x;
        a.push_back(x);
    }
    int r = largest(a , n);
    cout<<r;
     return 0;
}