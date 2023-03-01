#include<bits/stdc++.h>
using namespace std;
  	int  minimum_difference(vector<int>nums){
        sort(nums.begin() , nums.end());
        int low = 0;
        int high = 1;
        int minDiff = INT_MAX;
        while(high<nums.size()){
            int diff = nums[high++]-nums[low++];
            minDiff = min(minDiff , diff);
        }
        return minDiff;
   	}  

int main(){ 
    vector<int> nums = {2,4,5,7,9};
    int ans = minimum_difference(nums);
    cout<<ans<<endl;
     return 0;
}