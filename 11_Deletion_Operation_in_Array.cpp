#include <bits/stdc++.h>
using namespace std;

void display(int arrr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arrr[i] << " ";
    }
    cout << endl;
}

void delet(int arr[], int size, int index)
{

    for (int i = index; i <= size - 2; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {1, 3, 5, 9, 23, 55};
    int size = 6, index = 3;
    display(arr, size);
    delet(arr, size, index);
    cout << "after deleted" << endl;
    size -= 1;
    display(arr, size);
    return 0;
}