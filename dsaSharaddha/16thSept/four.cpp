#include<bits/stdc++.h>
using namespace std;

 bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> m;
        for(int i=0 ; i<nums.size() ; i++)
        {
            m[nums[i]]++;
        }
        for(auto &i : m)
        {
            if(i.second>1)return true;
        }
        return false;
    }

int main(){ 
    vector<int> nums = {1,2,3,1};
    bool a = containsDuplicate(nums);
    cout<<a<<endl;
 

     return 0;
}