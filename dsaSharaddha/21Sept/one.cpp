#include<bits/stdc++.h>
using namespace std;

//  vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> left , right(n) , output(n);
//         int product = 1;
//         for(int i=0 ; i<n ; i++)
//         {
//             product  = product * nums[i];
//             left.push_back(product);
//         }

//         product = 1;
//         for(int i=n-1 ; i>=0 ; i--)
//         {
//             product = product * nums[i];
//             right[i] = product;
//         }

//         output[0] = right[1];
//         output[n-1] = left[n-2];
//         for(int i=1;i<n-1 ; i++)
//         {
//             output[i] = left[i-1] * right[i+1];
//         }
//         return output;
//     }

     vector<int> productExceptSelf(vector<int>& nums) {
           int n = nums.size();
        vector<int>  output;
        if(n<=1)return nums;
        
        int product = 1;
        for(int i=0 ; i<n ; i++)
        {
            product  = product * nums[i];
            output.push_back(product);
        }

        product = 1;
        for(int i=n-1 ; i>0 ; i--)
        {
            output[i] = output[i-1] * product;
            product = product * nums[i];
        }
        output[0] = product;
        
        return output;
    }

int main(){ 
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);

    for(int &i : ans)
    {
        cout<<i<<" ";
    }

     return 0;
}