#include<bits/stdc++.h>
using namespace std;

 int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int , int> m;
        int count=0;
      
     for(int i=0 ; i<n ; i++)
        {
                m[a[i]] ++;

                if(m[a[i]]==k)
                return a[i];
        }
    
        return -1;

        }

int main(){ 

    int a[] =  {1, 7, 4, 3, 4, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k;
    cin>>k;
    int result = firstElementKTime(a , n , k);
    cout<<result;
     return 0;
}