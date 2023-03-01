#include<bits/stdc++.h>
using namespace std;

	vector<int>solveQueries(vector<int>nums, vector<vector<int>>Queries, int k){
        
        int len = sqrtl(nums.size())+1;
        int count = 0;

        vector<int> b(len);
        unordered_map<int ,int> count;
        for(int i=0 ; i<)
        for(int i=0 ; i<nums.size();i++)
        {
            b[i/len] = 
        }
	}

int main(){ 
    vector<int> nums = {1,1,2,1,3};
    vector<vector<int>> q = {{1,5} , {2,4}};

    int k;
    cin>>k;

    vector<int> ans = solveQueries(nums , q , k);
    for(int &i : ans)
    {
        cout<<i<<" ";
    }
     return 0;
}