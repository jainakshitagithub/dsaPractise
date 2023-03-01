#include<bits/stdc++.h>
using namespace std;

class heap{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void delete_heap()
    {
        arr[1] = arr[size];
        size = size - 1;
        int index = 1; 
       

        while(index<size)
        {
        int l = 2*index;
        int r = 2*index + 1;
        if(l<size && arr[index]<arr[l])
        {
            swap(arr[index] , arr[l]);
            index = l;
        }
        else if(r<size && arr[index]<arr[r])
        {
            swap(arr[index] , arr[r]);
            index = r;
        }
        else{
            return ;
        }

        }

    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){ 
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);

    h.delete_heap();
    h.delete_heap();
   


    h.print();

     return 0;
};