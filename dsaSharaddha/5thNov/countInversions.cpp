#include <bits/stdc++.h>
using namespace std;

long long int merge(long long low, long long mid, long long high, long long arr[], long long n)
{
    long long i = low;
    long long j = mid;
    long long k = low;
    long long B[high + 1];
    long long int ans=0;
    while (i <= mid-1 && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
            // ans = ans + (mid-i);
        }
    }
    while (i <= mid-1)
    {
        B[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    for(long long i=0 ; i<high+1 ; i++){
        cout<<B[i]<<" ";
        arr[i] = B[i];
    }
    return ans;
}

long long int mergeSort(long long arr[], long long N, long long low, long long high)
{
    long long int ans=0;
    if (low < high){
    long long mid = (low + high) / 2;
      ans+=  mergeSort(arr, N, low, mid);
      ans+=  mergeSort(arr, N, mid + 1, high);
      ans+=  merge(low, mid, high, arr, N);
    }
    return ans;
}

long long int inversionCount(long long arr[], long long N)
{
    long long int res;
    return res;
}

int main()
{
    long long arr[] = {2, 4, 1, 3, 5};
    long long N = 5;

   long long int res =  mergeSort(arr , N , 0 , N-1);
        for(long long i=0 ; i<N ; i++){
        // cout<<arr[i]<<" ";
    }
    cout<<endl;
    // long long int res = inversionCount(arr, N);
    cout << res << endl;
    return 0;
}