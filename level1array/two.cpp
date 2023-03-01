#include<bits/stdc++.h>
using namespace std;

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
        vector<int> v;
        for( int i =1 ; i<=n ; i++)
        {
            if(arr[i-1]==i)
            {
                v.push_back(i);
            }
        }
        if(v.empty())
        {
            vector<string> s;
            s.push_back("Not Found");
        }
       return v;

	}

int main(){ 

    //input area
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n ;i++){
        int x;
        cin>>x;
        a[i] = x;
    }

     for(int &value : a)
   {
    cout<<value<<" ";
   }
cout<<endl;
    //function
   vector<int> v =  valueEqualToIndex(a , n);
   
   //output area
   for(int &value : v)
   {
    cout<<value<<" ";
   }
     return 0;
}