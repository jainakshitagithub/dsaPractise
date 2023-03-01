#include<bits/stdc++.h>
using namespace std;

	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
        vector<int> v;
        int more = 0;
        int less = 0;
        for(int i =0 ; i<n ; i++)
        {
            if(arr[i] <= x)
            {
                less = less+1;
            }

            if(arr[i]>=x)
            {
                more = more+1;
            }
        }
        v.push_back(less);
        v.push_back(more);

        return v;
	}

int main(){ 
    int a[7] = {1,2,8,10,11,12,19};
    int size = sizeof(a)/sizeof(a[0]);
    int x;
    cin>>x;
   vector<int> v = getMoreAndLess(a , size , x);
   for(int &value : v)
   {
    cout<<value<<" ";
   }
     return 0;
}