#include<bits/stdc++.h>
using namespace std;

   int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int maxHeight = 0;
        int minHeight ;
        while(l<r)
        {
            int lh = height[l];
            int rh = height[r];
            int min_h = min(lh , rh);
            int len = r-l;
            maxHeight = max(maxHeight , min_h * len  );
            if(lh<rh)l++;
            else r--;
        }
        return maxHeight;
    }

int main(){ 
    vector<int> height = { 1,8,6,2,5,4,8,3,7};
    int res = maxArea(height);
    cout<<res;
     return 0;
}