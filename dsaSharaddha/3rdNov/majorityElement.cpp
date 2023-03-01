#include<bits/stdc++.h>
using namespace std;


//Moore Voting Algorithm
    int findCandidate(int a[] , int size){
        int count = 0;
        int candidate = 0;
        for(int i=0 ; i<size ; i++){
            if(count==0){
                candidate = a[i];
                count = 0;
            };

            if(candidate==a[i])count++;
            else count--;
        }     
            return candidate;
    }

    int majorityElement(int a[], int size)
    {
    int candidate =   findCandidate(a , size);
    int count=0;
    for(int i=0 ; i<size ; i++){
        if(a[i]==candidate)count++;
    }
    if(count>size/2)return candidate;
    return -1;

    }

int main(){ 
    int a[] = {3,1,2}  ;
    int n = sizeof(a)/sizeof(a[0]);
    int res = majorityElement(a , n);
    cout<<res;

     return 0;
}