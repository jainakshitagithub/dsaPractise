#include <bits/stdc++.h>
using namespace std;

int indDeletion(int *array, int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    return 1;
}

int leftElement(int a[], int n)
{
    // Your code goes here
    sort(a, a + n);
    if (n % 2 == 0)
    {
        return a[(n / 2) - 1];
    }
    else
    {
        return a[n / 2];
    }
}

int main()
{
    int a[] = {7, 8, 3, 4, 2, 9, 5};
    int r = leftElement(a, 7);
    cout << r;
    return 0;
}