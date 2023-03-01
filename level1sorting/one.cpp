#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &A, int low, int mid, int high)
{
    int i = low, j = mid + 1;
    int k = low;
    int B[100];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void sort(vector<int> &A , int low , int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        sort(A , low , mid );
        sort(A , mid+1 , high);
        merge(A , low ,mid , high);
    }
}
vector<int> sortArr(vector<int> arr, int n)
{
   sort(arr , 0 , n-1);
   return arr;
}

// vector<int> sortArr(vector<int> arr, int n)
// {
//    for(int i=0 ; i<n-1 ; i++)
//    {
//     for(int j =0 ; j<n-i-1 ; j++)
//     {
//         if(arr[j]>arr[j+1])
//         {
//             swap(arr[j] , arr[j+1]);
//         }
//     }
//    }
//    return arr;
// }

int main()
{
    vector<int> v = {1, 5, 3, 2};
    vector<int> result = sortArr(v, v.size());
    for (int &i : result)
    {
        cout << i << " ";
    }
    return 0;
}