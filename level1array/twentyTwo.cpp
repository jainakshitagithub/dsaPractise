#include<bits/stdc++.h>
using namespace std;


int main(){ 
    int n = 2;
    int m = 2;
    // int arr[n][m] = {{1,2,3}, {4,5,6}, 
    //               {7,8,9}} ;
    int arr[n][m] =  {{1, 2}, {1, 2}}  ;
    // int a[][3] = {{1,2,3} , {4} , {7,8}};
    // int a[][3] = {1,2,3 , 4 , 7,8 , 1};
    // int a[][3] = {0}; //it will only take one row as it will not decide how many rows would be inserted
    // int a[3][3]  = {0};//all will be implicitly intialized with zero
//    int a[3][3];//this will not give error but the garbage value will be show for all the 9 places

    for(int i= 0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"*****************************"<<endl;
cout<<"TRANSPOSE OF MATRIX"<<endl;
      for(int i= 0 ; i<m ; i++)
    {
        for(int j =0 ; j<n ; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
     return 0;
}