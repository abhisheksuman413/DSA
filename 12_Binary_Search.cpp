#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size;
    while (low <= high)
    {
    mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

     int arr[] = {1, 3, 7, 35, 39, 43, 55, 65, 75, 101, 111};
    int size = sizeof(arr) / sizeof(int); // sizeof(arr) pura array ka size deta hai int ke stah
    int element = 113;
    int searched_index = binary_search(arr, size, element);
    cout << "the element " << element << " is on " << searched_index << " index " << endl;

    return 0;
}