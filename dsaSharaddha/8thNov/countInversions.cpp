#include <bits/stdc++.h>
using namespace std;

long long int merge(long long arr[] , int temp[], long long N , int left , int mid , int right){
    int i, j, k;
    int inv_count = 0;
 
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
 
            // this is tricky -- see above
            // explanation/diagram for merge()
            inv_count = inv_count + (mid - i);
        }
    }
 
    // Copy the remaining elements of left subarray
    // (if there are any) to temp
    while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    // Copy the remaining elements of right subarray
    // (if there are any) to temp
    while (j <= right)
        temp[k++] = arr[j++];
 
    // Copy back the merged elements to original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
}

long long int mergeSort(long long arr[],long long temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        // Divide the array into two parts and
        // call _mergeSortAndCountInv()
        // for each of the parts
        mid = (right + left) / 2;
 
        // Inversion count will be sum of
        // inversions in left-part, right-part
        // and number of inversions in merging
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
 
        // Merge the two parts
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long int inversionCount(long long arr[], long long N)
{
    long long temp[N+1];
    long long int ans;
     int res = mergeSort(arr,temp, 0, N-1);
     cout<<res;
    return ans;
}

int main()
{
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = sizeof(arr) / sizeof(arr[0]);
    long long int res = inversionCount(arr, n);
    cout << res;
    return 0;
}