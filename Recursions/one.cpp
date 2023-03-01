#include<bits/stdc++.h>
using namespace std;

void func(int ind , int sum , vector<int> &arr , vector<int> &sumSub , int n)
{
    if(ind == n)
    {
        sumSub.push_back(sum);
        return;
    }

    //Pick the element
    func(ind + 1, sum+arr[ind], arr , sumSub ,  n);

    //Do not pick the element
    func(ind + 1, sum , arr , sumSub , n);

}

   vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset;
        func(0 , 0 , arr , sumSubset , N);
        sort(sumSubset.begin() , sumSubset.end());
        return sumSubset;
    }

int main(){ 
    vector<int> arr = {2,3};
    int n = 2;

    vector<int> v = subsetSums(arr , n);

    for(int &i : v)
    {
        cout<<i<<" ";
    }

     return 0;
}