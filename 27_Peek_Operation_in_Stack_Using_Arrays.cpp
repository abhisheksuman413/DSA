#include <bits/stdc++.h>
using namespace std;

class stackk
{
public:
    int size;
    int top;
    int *arrr;
};

void printt(stackk *ar)
{
    cout << "print the given stack " << endl;

    for (int i = ar->top; i >= 0; i--)
    {

        cout << ar->arrr[i] << endl;
    }
}

int fulll(stackk *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int emptyy(stackk *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pushh(stackk *ptr, int val)
{ // iss function se hamlog stack Abstract_Data_type me push kr rhe hai
    if (fulll(ptr))
    {
        cout << "stack is full or overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arrr[ptr->top] = val;
    }
}

void popp(stackk *ptr)
{

    if (emptyy(ptr))
    {
        cout << "stackk is empty or underflow" << endl;
    }
    else
    {

        int val = ptr->arrr[ptr->top];
        cout << val << " is poped form the the given stack" << endl;
        ptr->top--;
    }
}

void peekk(stackk *ptr, int position)
{
    int arrayint = ptr->top - position + 1;
    if (position <= 0 || position > ptr->size)
    {
        cout << " given position is not correct" << endl;
    }
    else
    {
        cout << " In stack at postion " << position << " the vale is " << ptr->arrr[arrayint] << endl;
    }
}

int main()
{

    stackk *abhi = new stackk;
    abhi->size = 5;
    abhi->top = -1;
    abhi->arrr = new int[abhi->size];

    pushh(abhi, 55);
    pushh(abhi, 5);
    pushh(abhi, 7);
    pushh(abhi, 14);
    pushh(abhi, 3);

    printt(abhi);

    // Given position pe value find kr rhe hai
    peekk(abhi, 3);
    peekk(abhi, 65);   // yha or niche pe value nhi dwga becouse dono formate glt hai
    peekk(abhi, 0);

    

    return 0;
}