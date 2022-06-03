#include <bits/stdc++.h>
using namespace std;

class stackk
{
public:
    int size;
    int top;
    char *arrr;
};

int emptyy(stackk *abhi)
{
    if (abhi->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int fulll(stackk *abhi)
{
    if (abhi->top == abhi->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int operatorr(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char c)
{
    if (c == '*' || c == '/')
    {
        return 5;
    }
    else if (c == '+' || c == '-')
    {

        return 3;
    }
    else
    {
        return 0;
    }
}

char stacktopp(stackk *abhi)
{
    char a = abhi->arrr[abhi->top];
    return a;
}
void pushh(stackk *&abhi, char c)
{
    if (fulll(abhi))
    {
        cout << "Stack overflow ho chuka hai " << endl;
    }
    else
    {
        abhi->top++;
        abhi->arrr[abhi->top] = c;
    }
}
char popp(stackk *&abhi)
{
    if (emptyy(abhi))
    {
        cout << "stack underflow ho chuka hai " << endl;
        return -1;
    }
    else
    {
        char c = abhi->arrr[abhi->top];
        abhi->top--;
        return c;
    }
}
char * infix_to_POstfix(char *infix, stackk *abhi)
{
    char *postfix = new char[100];
    int i = 0; // Track infix traversal
    int j = 0; // Track podtfix addition

    while (infix[i] != '\0')
    {
        if (!operatorr(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktopp(abhi)))
            {
                pushh(abhi, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = popp(abhi);
                j++;
            }
        }
    }
    while (!emptyy(abhi))
    {
        postfix[j] = popp(abhi);
        j++;
    }
    postfix[j] = '\0';
    // cout<<postfix<<endl;
    return postfix;
}

int main()
{
    stackk *abhi = new stackk();
    abhi->size = 100;
    abhi->top = -1;
    abhi->arrr = new char[abhi->size];
    char *infix;
    cout << "Enter the expression " << endl;
    cin >> infix;
    // infix_to_POstfix(infix, abhi);
    char *a=infix_to_POstfix(infix,abhi);
    cout<<a<<endl;


    return 0;
}