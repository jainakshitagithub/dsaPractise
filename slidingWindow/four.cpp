#include<bits/stdc++.h>
using namespace std;

//Variable Size Sliding Window

int maximunSubArray(int arr[] , int n , int k)
{
 int i =0 , j = 0 , sum = 0 , maxSize = 0;
while(j<n)
{
    sum = sum + arr[j];
    if(sum<k)
    j++;

    else if(sum==k)
    {
        maxSize = max(maxSize , j-i+1);
        j++; //Can't maintaint here
    }
    else if(sum>k)
    {
        while(sum>k)
        {
            //remove the calculations for i
            sum = sum - arr[i];
            i++;
        }
        j++;
    }
} 
    return maxSize;
}
int main(){ 
    int arr[] = {4,1,1,1,2,3,5};
    int n = sizeof(arr)/sizeof(int);
    int k ;
    cin>>k;
    int res = maximunSubArray(arr , n , k);
    cout<<res<<endl;

    return 0;
}