#include <bits/stdc++.h>
using namespace std;

class arrays
{
protected:
    int total_size;
    int used_size;
    int *arr;       // yha eak pointer bnaye hai 

public:
    arrays(int t_size, int u_size)
    {

        total_size = t_size;
        used_size = u_size;
        arr= new int [total_size];     //yha ham abstract data type se array bna rha hai 
    }

    void stedata()
    {

        for (int i = 0; i < used_size; i++)
        {
            cout << "Enter the " << i + 1 << " element" << endl;
            cin >> arr[i];
        }
    }

    void print()
    {

        for (int i = 0; i < used_size; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{

    arrays marks(11, 5);
    marks.stedata();
    marks.print();

    return 0;
}