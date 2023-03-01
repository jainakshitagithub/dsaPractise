#include<bits/stdc++.h>
using namespace std;

 vector<int> findElements(int a[], int n)
    {
        // Your code goes here   
        vector<int> v;
        int max = *max_element(a , a+n);
        int smax = -1;
        for(int i =0 ; i<n ; i++)
        {
            if(a[i]>smax && a[i]<max)
            {
            smax = a[i];
            }
        }


        for(int i =0 ; i<n ; i++)
        {
            if(a[i]!=max && a[i]!=smax)
            {
                v.push_back(a[i]);
            }
        }
      sort(v.begin() , v.end());
        return v;
    }

int main(){ 
    int a[] = {2, 8, 7, 1, 5};
    vector<int> v = findElements( a,  5);
    for(int &value : v)
    {
        cout<<value<<" ";
    }
     return 0;
}