#include<bits/stdc++.h>
using namespace std;

	// string printLargest(vector<string> &arr) {
	//     // code here
    //     string res;
        
    //     for(int i=0 ; i<arr.size()-1 ; i++)
    //     {
    //         for(int j = i+1 ; j<arr.size() ; j++)
    //         {
    //             string ij = arr[i]+arr[j];
    //             string ji = arr[j]+arr[i];
    //             if(ij<ji)
    //             swap(arr[i] , arr[j]);
    //         }
    //     }
    //     for(int i=0 ; i<arr.size() ; i++)
    //     {
    //             res+=arr[i];
    //     }
    //     return res;
	// }

    bool check(string &a , string &b)
    {
        if(a+b >= b+a)
        return true;
        return false;
    }

    	string printLargest(vector<string> &arr) {
	    // code here
        string res;
        
        sort(arr.begin() , arr.end() , check);
        for(int i=0 ; i<arr.size() ; i++)
        {
                res+=arr[i];
        }
        return res;
	}

    	

int main(){ 
    vector<string> arr = {"3", "30", "34", "5", "9"};
    string res = printLargest(arr);
    cout<<res<<endl;
     return 0;
}