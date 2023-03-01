#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

 string average(int A[], int N)
    {
        float sum = 0;
        for(int i =0 ; i<N ; i++)
        {
            sum = sum + A[i];
        }
            float avg = sum /N;
        return to_string(avg); 
    }

int main(){ 
   int n =  5;
int arr[] = {1 , 2 ,  3 ,  4 ,  5};
string s = average(arr , n);
cout<<setprecision(2)<<fixed;
cout<<s;

     return 0;
}