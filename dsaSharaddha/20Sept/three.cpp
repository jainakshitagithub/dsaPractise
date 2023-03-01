#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
       int maxleft = height[0];
       int maxright = height[n-1];
       int trappedWater = 0;
       vector<int> left(n) , right(n);
       left[0] = 0;
       right[n-1] = 0;

       for(int i=1 ; i<n ; i++)
       {
        left[i] = maxleft;
        maxleft = max(maxleft , height[i]);
       }

       for(int i=n-2 ; i>=0 ; i--)
       {
        right[i] = maxright;
        maxright = max(maxright , height[i]);
       }

       for(int i=1 ; i<n-1 ; i++)
       {
        if(height[i]<left[i] && height[i]<right[i])
        trappedWater += min(left[i] , right[i])-height[i];
       }
       return trappedWater;
}

 int trap(vector<int>& height) {
    int n = height.size();
       int maxleft = height[0];
       int maxright = height[n-1];
       int left = 1;
       int right = n-2;
       int trappedWater = 0;
       while(left<=right)
       {
        if(maxleft<maxright)
        {
            if(height[left]>maxleft)maxleft = height[left];
            else
            trappedWater += maxleft - height[left];
            left++;
        }
        else
        {
            if(height[right]>maxright)maxright = height[right];
            else
            trappedWater += maxright - height[right];
            right--;
        }
       }
       return trappedWater;
    }
int main(){ 
    vector<int> arr = {4,2,0,3,5};
    int res = trap(arr);
    cout<<res;
     return 0;
}