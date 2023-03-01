#include<bits/stdc++.h>
using namespace std;

vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	// Write your code here.
    map<int , int> count;
    vector<int> v;
    int max = n/k;
    cout<<"Max : "<<max<<endl;
    for(int i =0 ; i<n ; i++)
    {
        count[arr[i]]++;

            // cout<<count[arr[i]]<<" no condition "<<arr[i]<<endl;

         if(count[arr[i]]>=max)
        {
            // cout<<count[arr[i]]<<" "<<arr[i]<<endl;
            auto it = find(v.begin() , v.end() , arr[i]);
            if(it==v.end())
            {
            v.push_back(arr[i]);
            }
        }
    }
    return v;

}

int main(){ 
    vector<int> v = { 1,2,1,2,3,4};
    int k = 6;
    vector<int> result = countTheNumber(v , 6 , k);

    for(int &value : result)
    {
        cout<<value<<" ";
    }
     return 0;
}