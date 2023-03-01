#include<bits/stdc++.h>
using namespace std;

	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
        vector<int> v;
        int a = n/2;
        for(int i=0 ; i<a ; i++)
        {
            v.push_back(arr[i]);
            v.push_back(arr[i+a]);
        }

        for(int i= 0 ; i<n ; i++)
        {
            arr[i] = v[i];
        }

         for(int i= 0 ; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
	}

int main(){ 
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    shuffleArray(arr , n);
     return 0;
}