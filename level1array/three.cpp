#include<bits/stdc++.h>
using namespace std;

	int print2largest(int arr[], int n) {
	    // code here
        int max = *max_element(arr , arr+n);
        int smax = -1;
        for(int i = 0 ;i<n ; i++)
        {
            if(arr[i]>smax && arr[i]<max)
            {
                smax = arr[i];
            }
        }
        return smax;
	}

int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }

      

    int result = print2largest(a , n);
    cout<<result<<endl;

     return 0;
}