#include <bits/stdc++.h>
using namespace std;

int searchi(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 7, 35, 9, 43, 55, 65, 75, 101, 111};
    int size = sizeof(arr) / sizeof(int); // sizeof(arr) pura array ka size deta hai int ke stah
    int element = 35;
    int searched_index = searchi(arr, size, element);
    cout << "the element " << element << " is on " << searched_index << " index " << endl;
    return 0;
}