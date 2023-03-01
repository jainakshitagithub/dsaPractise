#include<bits/stdc++.h>
using namespace std;

	void swapKth(int *arr, int n, int k) {
	    // code here
        // for(int i =k ; i<1 ; i+=k)
        // {
        // }
        swap(arr[k-1] , arr[n-k]);
       for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
       }
	}

int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        a[i] = x;
    }

    int element;
    cin>>element;
    swapKth(a , n , element);
     return 0;
}