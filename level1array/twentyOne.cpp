#include<bits/stdc++.h>
using namespace std;

 void scores(long long a[], long long b[], int &ca, int &cb)
    {
        // Your code goes here   
        for(int i =0 ; i<3 ; i++)
        {
            if(a[i]>b[i])
            {
                ca++;
            }
            else if(a[i] < b[i])
            {
                cb++;
            }

        }
    }
int main(){ 
   long long A[] = {4, 2, 7};
 long long B[] =  {5, 6, 3};
 int ca = 0;
 int cb = 0;
 scores(A , B , ca , cb);
 cout<<"Scores of A:"<<ca<<endl;
 cout<<"Scores of B:"<<cb<<endl;

     return 0;
}