#include <bits/stdc++.h>
using namespace std;

int PalinArray(int a[], int n)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        int number = a[i];
        int revNumber = 0;
        while (number > 0)
        {
            int remainder = number % 10;
            number = number / 10;
            revNumber = (revNumber * 10) + remainder;
        }
        
        if(a[i] != revNumber)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[3] = {121 ,131 , 20};
  int r =   PalinArray(a , 3);
  cout<<r;

    return 0;
}