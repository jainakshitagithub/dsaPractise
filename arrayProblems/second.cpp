#include<bits/stdc++.h>
using namespace std;

  int binarysearch(int arr[], int n, int k) {
    int high = n-1;
    int low = 0;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid] == k)
        {
            return mid;
        }
        if(arr[mid]>k)
        {
            high = mid-1;
        }
        else 
        {
            low = mid+1;
        }
    }
    return -1;
    }

int main(){ 
    int n , element;
    cin>>n;
    int a[n];
    for(int i=0 ;i <n ; i++)
    {
        int x;
        cin>>x;
        a[i] = x;
    }
    cin>>element;
   int result =  binarysearch(a , n , element);
   cout<<result<<" my result"<<endl;


     return 0;
}