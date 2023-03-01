#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int curSum = 0;
    int maxSum = INT_MIN;
        for(int i=0 ; i<nums.size() ; i++)
        {
            curSum = max(curSum + nums[i] , nums[i]);
           
            maxSum = max(maxSum , curSum);
            
        }
        return maxSum;
    }

int main(){ 
    vector<int> v = {-1};
    int res = maxSubArray(v);
    cout<<res;
     return 0;
}