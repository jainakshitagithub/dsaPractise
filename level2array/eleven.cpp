#include <bits/stdc++.h>
using namespace std;

int thirdLargest(int a[], int n)
{
    // Your code here
    int max = *max_element(a , a+n);
    int second_max = -1;
    int third_max = -1;
    for(int i=0 ; i<n ; i++)
    {
        if(max>a[i] && second_max<a[i] )
        {
            second_max = a[i]; 
        }
    }
    for(int i =0 ; i<n ; i++)
    {
        if(second_max>a[i] && third_max<a[i])
        {
            third_max = a[i];
        }
    }
    return third_max;
}

int main()
{
    int n = 2;
    int a[] = {10,2};
    int result =  thirdLargest( a ,  n);
    cout<<result;
    return 0;
}