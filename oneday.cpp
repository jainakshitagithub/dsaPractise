#include<iostream>
using namespace std;

/*
Recursion function --> When function call itself again and again itself until the specifiled condition
*/


void fun1(int n)
{
   int i = 0;  
   if (n > 1)
   {
   fun1(n - 1);
   }
   for (i = 0; i < n; i++)
     cout << " * ";
     cout<<endl;
  
}


void fun(int x)
{
  if(x > 0)
  {
    fun(--x);
    cout << x <<" ";
    fun(--x);
  }
}



int main(){ 
    // fun1(5);
    int a = 4;
  fun(a);
     return 0;
}