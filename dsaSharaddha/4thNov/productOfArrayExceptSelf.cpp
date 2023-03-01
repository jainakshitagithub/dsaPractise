#include<bits/stdc++.h>
using namespace std;

//By Division method
    // vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
    //     vector<long long int > output;
    //     int product = 1;
    //     for(int i=0 ; i<n ; i++){
    //         product *= nums[i];
    //     }
    //     for(int i=0 ; i<n ; i++){
    //         int ans = product/nums[i];
    //         output.push_back(ans);
    //     }
    //     return output;
    // }

    //Second Approach
        vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int > output;
        int product = 1;
        for(int i=0 ; i<n ; i++){
            product *= nums[i];
            output.push_back(product);
        }
        product =1;
        for(int i=n-1 ; i>0 ; i--){
           output[i] = output[i-1] * product;
            product = product * nums[i];
        }
        output[0] = product;
        return output;
    }

int main(){ 
    vector<long long int> arr = {1,2,3,4};
    int n = arr.size();
    vector<long long int> res = productExceptSelf(arr , n);
    for(auto i : res)cout<<i<<" ";
    cout<<endl;
     return 0;
}