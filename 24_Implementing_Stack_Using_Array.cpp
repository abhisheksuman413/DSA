#include <bits/stdc++.h>
using namespace std;

class stackk
{

public:
    int size;
    int top;
    int *arrr;
};

int empty(stackk *ptr)
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

int full(stackk *ptr)
{
    if (ptr->top >= ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printt(stackk *ar)     
{
    cout<<"print the given stack "<<endl;

    
    for (int i = ar->top ; i>= 0  ; i--)      
    {

        cout << ar->arrr[i] << endl;
    }
}

int main()
{

    // stackk abhi;
    // abhi.size=15;
    // abhi.top=-1;
    // abhi.arr=new int[abhi.size];

    stackk *abhi = new stackk;
    abhi->size = 5;
    abhi->top = -1;
    abhi->arrr = new int[abhi->size];

    // pop in stack by manually

    abhi->arrr[0] = 5;
    abhi->top++;
    abhi->arrr[1] = 7;
    abhi->top++;
    abhi->arrr[2] = 9;
    abhi->top++;
    abhi->arrr[3] = 51;
    abhi->top++;
    abhi->arrr[4] = 52;
    abhi->top++;
    // abhi->arrr[5]=32;
    // abhi->top++;
    // // abhi->arrr[6]=22;
    // // abhi->top++;

    // For cheacking stack is empty or not

    // abhi->top=empty(abhi);   >>> agr ase likhte hai to niche if() me comment wala use krna hoga
    cout << abhi->top << endl;
    ;

    // if(abhi->top){
    if (empty(abhi))
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }
    // for cheacking stackk is full or not
    abhi->top = full(abhi);
    cout << abhi->top << endl;

    if (abhi->top)
    {
        cout << "stack is full " << endl;
    }
    else
    {
        cout << "Stack is not full " << endl;
    }

    printt(abhi);

    return 0;
}