#include<bits/stdc++.h>
using namespace std;



    vector<vector<int>> ans;


void  permut(vector<int> &nums , int ind)
{
    if(ind == nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    
    for(int i=ind ; i<nums.size() ; i++)
    {
        cout<<i<<" "<<ind<<endl;
        swap(nums[i] , nums[ind]);
        permut(nums , ind+1);    
        swap(nums[i] , nums[ind]);
    }
    return ;
}

void permut(vector<int> &nums)
{
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin() , nums.end()));
}
int main(){ 
    vector<int> nums = {1,2,3};
    permut(nums , 0);
    // permut(nums);

    for(auto &v : ans)
    {
        for(auto &i : v)
        cout<<i<<" ";
        cout<<endl;
    }
     return 0;
}