#include<bits/stdc++.h>
using namespace std;

// void immediateSmaller(int *arr, int n) {
// 	    //  code here
// 	   stack<int> s;
//        for(int i=n-1 ; i>=0 ; i--)
//        {
//         s.push(arr[i]);
//        }

//       while(!s.empty())
//       {

//          int x = s.top();
       
//        s.pop();
       
//        if(!s.empty())
//        {
//        if(x>s.top())
//        cout<<s.top()<<" ";
//        else
//        cout<<-1<<" ";
//        }
//        else
//         cout<<-1<<" ";
       
//       }
// 	}

    void immediateSmaller(int *arr, int n) {
	    //  code here
	   for(int i=0 ; i<n ; i++)
       {
        arr[i]  = (arr[i]>arr[i+1])? arr[i+1] : -1;
        arr[n-1] = -1;
        cout<<arr[i]<<" ";
       }
	}

int main(){ 
    int arr[] = {4,2,1,5,3};
    int n = 5;
    immediateSmaller(arr , n);
     return 0;
}