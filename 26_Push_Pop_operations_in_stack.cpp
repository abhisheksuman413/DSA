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
    cout<<"print the given stack "<<endl;

    
    for (int i = ar->top ; i>= 0  ; i--)      
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

int main()
{
    stackk *abhi = new stackk;
    abhi->size = 5;
    abhi->top = -1;
    abhi->arrr = new int[abhi->size];

    cout << "cheacking stack is  full or empty" << endl;

    // print 1 if full else 0
    cout << fulll(abhi) << endl;
    // print 1 if empty else 0
    cout << emptyy(abhi) << endl;

    // push in stack Abstract_Data_type
    // agr size se jda push krte hai to stackk
    pushh(abhi, 46);
    pushh(abhi, 65);
    pushh(abhi, 54);
    pushh(abhi, 5);
    pushh(abhi, 4);
    pushh(abhi, 34);  // yha se stackk overflow hona start ho jyega becouse stack full ho gya hai
    pushh(abhi, 554); // ye dono print nhi hoga becouse stack full ho gya hai

    cout << "cheacking stack is  full or empty" << endl;
    // print 1 if full else 0
    cout << fulll(abhi) << endl;
    // print 1 if empty else 0
    cout << emptyy(abhi) << endl;

    printt(abhi);

    // poped form given stackk
    cout << "After poped from the given stack" << endl;
    popp(abhi);
    popp(abhi);
    popp(abhi);
    printt(abhi);

    return 0;
}