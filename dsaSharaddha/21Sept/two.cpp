#include<bits/stdc++.h>
using namespace std;

  int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int ma = ans;
        int mi = ans;

        for(int i=1 ; i<n ; i++)
        {
            if(nums[i]<0)
            {
                swap(ma , mi);
            }
            ma = max(nums[i] , ma*nums[i]);
            mi = min(nums[i] , mi*nums[i]);
            ans = max(ans , ma);

        }
        return ans;
    }
int main(){ 
    vector<int> nums  = {2,3,-2,4};
    int res = maxProduct(nums);
    cout<<res<<endl;

     return 0;
}