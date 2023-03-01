#include<bits/stdc++.h>
using namespace std;

   bool isLucky(int n) {
        // code here
        static int counter = 2;
        if(n<counter)
        return 1;

        if(n%counter == 0)
        return 0;
        int np = n;
         np = np - (np/counter);
        counter++;
        return isLucky(np);

    }
    
int main(){ 
    int n;
    cin>>n;
    bool result = isLucky(n);
    cout<<result<<endl;
     return 0;
}