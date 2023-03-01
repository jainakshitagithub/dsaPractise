#include<bits/stdc++.h>
using namespace std;


void printCombination(int arr[], int n, int r)
{
    int data[r];
    utilPrint(arr, n, r, 0, data, 0);
}
 

void utilPrint(int arr[], int n, int r,
                    int index, int data[], int i)
{
    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data[j] << " ";
        cout << endl;
        return;
    }
 
    if (i >= n)
        return;
 
    data[index] = arr[i];

    utilPrint(arr, n, r, index + 1, data, i + 1);
    utilPrint(arr, n, r, index, data, i+1);
}



int main(){ 
   int arr[] = {1,2,3,4};
   int n = sizeof(arr)/sizeof(int);
    int r ;
    cin>>r;
    printCombination(arr , n , r);

     return 0;
}