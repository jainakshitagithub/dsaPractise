#include<bits/stdc++.h>
using namespace std;

	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
       unordered_map<int,int> m;
       int ans = 0, rem = 0 , sum = 0;
       m[0] = -1;
       for(int i=0 ; i<n ; i++)
       {
        sum = sum + arr[i];
        rem =sum % k;

        if(rem<0)rem+=k;

        if(m.count(rem))
        {
            int idx = m[rem];
            int len = i - idx;
            if(len>ans)ans = len;
        }
        else{
            m[rem] = i;
        }
       }
       return ans;

	}
int main(){ 
    int arr[] = {20,13,11,14,2,7,4,2,6,7,6,13,6};
    int n  = sizeof(arr) / sizeof(int);
    int k;
    cin>>k;
    int result = longSubarrWthSumDivByK(arr , n , k);
    cout<<result<<endl;
     return 0;
}