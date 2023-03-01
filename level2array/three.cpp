#include<bits/stdc++.h>
#include<vector>
using namespace std;

//MYSOLUTION ->that is not proficient and not preferable for all the test cases
//  int minDist(int a[], int n, int x, int y) {
//         // code here
//         sort(a , a+n);
//         vector<int> v1;
//         vector<int> v2;
//         for(int i =0 ; i<n ; i++)
//         {
//             if(a[i]==x)
//             {
//                 v1.push_back(i);
//             }
//             if(a[i]==y)
//             {
//                 v2.push_back(i);
//             }
//             if(!v1.empty() && !v2.empty() )
//             {
//                 int first = *min_element(v1.begin() , v1.end());
//                 int second = *min_element(v2.begin() , v2.end());
//                 return abs(second-first);
//             }
//         }
//         return -1;
//     }

//Method 1
// int minDist(int a[], int n, int x, int y) {
//         // code here
//         int min_dis = INT_MAX;

//        for(int i =0 ; i<n ; i++)
//        {
//         for(int j = 0; j<n ; j++)
//         {
//             if((a[i]==x && a[j]==y)|| (a[i]==y && a[j]==x) && min_dis>abs(i-j) )
//             {
//                 min_dis = abs(i-j);
//             }
//         }
//        }
//        return min_dis;
//     }

    //Method 2
    int minDist(int a[], int n, int x, int y) {
        int min_dis = INT_MAX;
        int prev;
        int i =0 ;
        for( i =0 ; i<n ; i++)
        {
            if(a[i]==x || a[i]==y)
            {
                prev=i;
                break;
            }
        }
        for( ; i<n ; i++)
        {
            if(a[i]==x || a[i]==y)
            {
                if(a[prev]!=a[i] && abs(prev-i)<min_dis)
                {
                    min_dis = abs(prev-i);
                    prev = i;
                }
                else{
                    prev = i;
                }
            }
        }
        if(min_dis == INT_MAX)
        {
            return -1;
        }
        return min_dis;
    }


int main(){ 
    int n = 62;
    int arr[] = {96,82,48,76,34,19,7,80,36,57,77,34,19,35,5,57,16,66,42,62,89,19,60,19,25,16,20,51,77,75,12,73,8,11,100,93,81,58,72,17,14,48,2,33,82,6,41,49,72,34,10,12,53,21,30,77,36,49,79,13,75,42};

int x = 36 ;
    int y =33;
    // int x = 42 ;
    // int y =12;
    // int n =7;
    // int arr[] = {86,39,90,67,84,66,62};

     int r =  minDist(arr,  n, x,  y) ;
     cout<<r;
     return 0;
}