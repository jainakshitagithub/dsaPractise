#include<bits/stdc++.h>
using namespace std;
//Boyre Moore Algorithm

pair<int,int> findCandidate(int arr[] , int size){
    pair<int , int> p;
    int num1 = -1;
    int num2 = -1;
    int c1 = 0;
    int c2= 0;
    for(int i=0 ; i<size ; i++){
        if(arr[i]==num1){
            c1++;
        }
        else if(arr[i]==num2){
            c2++;
        }
        else if(c1==0){
            num1 = arr[i];
            c1 = 1;
        }
        else if(c2==0){
            num2 = arr[i];
            c2 = 1;
        }
        else{
            c1--;
            c2--;
        }
    }
    p.first = num1;
    p.second = num2;
    return p;
}

pair<int, int> majorityElement(int arr[] , int size){
    pair<int,int> res; 
    pair<int , int> p = findCandidate(arr ,size);

    int c1 = 0 , c2 = 0;
    for(int i=0 ; i<size ; i++){
        if(arr[i]==p.first)c1++;
        if(arr[i]==p.second)c2++;
    }

    if(c1>size/3)res.first = p.first;
    else res.first = -1;
    if(c2>size/3)res.second = p.second;
    else res.second = -1;

    return res;

}
int main(){ 
    int arr[] = {1,1,1,2,2,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);;
    pair<int , int> ans = majorityElement(arr , n);
    cout<<ans.first<<" "<<ans.second<<endl;
     return 0;
}