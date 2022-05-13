#include <bits/stdc++.h>
using namespace std;

void display(int arrr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arrr[i]<<" " ;
        
    }
    cout<<endl;
}

void insert(int arr[], int size, int index, int capacity, int element)
{

    if (size >= capacity)
    {
        cout << "array full ho gya hai " << endl;
    }
    for(int i = size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }

    arr[index]=element;
}

int main()
{
    int arr[100] = {1, 3, 5, 9, 23, 55};
    int size = 6, index = 3, capacity = 100, element = 7;
    display(arr, size);
    insert(arr, size, index, capacity, element);
    cout<<"after inser"<<endl;
    size+=1;
    display(arr, size);
    return 0;
}