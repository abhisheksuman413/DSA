#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void enqueuee(node *&f, node *&r, int val)
{
    node *abhi = new node();
    if (abhi == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        abhi->data = val;
        abhi->next = NULL;
        if (f == NULL)
        {
            f = r = abhi;
        }
        else
        {
            r->next = abhi;
            r = abhi;
        }
    }
}

void dequeuee(node *&f)
{
    if (f == NULL)
    {
        cout << "Queue is Empty " << endl;
    }
    else
    {
        node *ptr = f;
        f = f->next;
        free(ptr);
    }
}

void printt(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element in Queue is :- " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    node *f = NULL;
    node *r = NULL;
    dequeuee(f);
    enqueuee(f, r, 65);
    enqueuee(f, r, 62);
    enqueuee(f, r, 89);
    enqueuee(f, r, 99);
    enqueuee(f, r, 5);
    enqueuee(f, r, 6);
    printt(f);

    cout<<"After Dequeue "<<endl; 
    dequeuee(f);
    dequeuee(f);
    dequeuee(f);
    printt(f);

    return 0;
}