#include<bits/stdc++.h>
using namespace std;

char nextAlphabeticallyElement(vector<char> arr , char k){
    int start = 0;
    int end = arr.size()-1;
    char res = '#';
    while(start<=end){

        int mid = start + (end-start)/2;
        if(arr[mid]==k)start = mid+1;
        else if(arr[mid]>k){
            res = arr[mid];
            end = mid - 1;
        }
        else start = mid+1;
    }
    return res;
}
int main(){ 
    vector<char> arr = {'a' , 'c' , 'f' , 'h'};
    char k = 'f';
    char res = nextAlphabeticallyElement(arr , k);
    cout<<res<<endl;
     return 0;
}