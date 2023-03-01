#include<bits/stdc++.h>
using namespace std;

	int sum(int arr[], int n) {
	    // code here
        int sum =0;
        for(int i =0 ; i<n ; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
	}

int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        a[i] = x;
    }

    int rr = sum(a , n);
    cout<<rr;

     return 0;
}