#include <bits/stdc++.h>
using namespace std;

class stackk
{
public:
    int size;
    int top;
    char *arrr;
};

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

int full(stackk *ptr)
{
    if (ptr->top = ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pushh(stackk *&ptr, char c)
{
    if (full(ptr))
    {
        cout << "Stack is overflow or full" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arrr[ptr->top] = c;
    }
}

void popp(stackk* &ptr){
    if(emptyy(ptr)){
        cout<<" Stack is underflow or empty "<<endl;
    }
    else{
        ptr->top--;
    }
}

int main()
{
    stackk *abhi = new stackk();
    abhi->top = -1;
    abhi->size = 100;
    char *exp;
    cout << "Enter the expression " << endl;
    cin >> exp;
    return 0;
}