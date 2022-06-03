#include <iostream>
#include <string>
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
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pushh(stackk *ptr, char c)
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

void popp(stackk *ptr)
{
    if (emptyy(ptr))
    {
        cout << " Stack is underflow or empty " << endl;
    }
    else
    {
        ptr->top--;
    }
}

bool checkkk(char c, stackk *&abhi)
{
    if(c == ')' && abhi->arrr[abhi->top] == '(') return true;
    else if(c == '}' && abhi->arrr[abhi->top] == '{') return true;
    else if(c == ']' && abhi->arrr[abhi->top] == '[') return true;
    else return false;
}

void parenthesiss(stackk *&abhi, string  ptr)
{

    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == '(' || ptr[i] == '{' || ptr[i] == '[')
        {
            pushh(abhi, ptr[i]);
        }
        else
        {
            if (emptyy(abhi))
            {
                cout << " Pranthesis not match " << endl;
                return;
            }
            else
            {
                if(checkkk(ptr[i], abhi)) popp(abhi);
                else
                {
                    cout << " Pranthesis not match " << endl;
                    return;
                }
                    
            }
        }
    }
    if (emptyy(abhi))
    {
        cout << "pranthesis matching " << endl;
    }
    else
    {
        cout << "Pranthesis not matching " << endl;
    }
}

int main()
{
    stackk *abhi = new stackk();
    abhi->top = -1;
    abhi->size = 100;
    abhi->arrr = new char[abhi->size];
    string exp;
    cout << "Enter the expression " << endl;
    cin >> exp;
    parenthesiss(abhi,exp);
    return 0;
}