#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int fulll(node *ptr)
{
    node *p = new node();
    if (p == NULL)
    {
        cout << " stack is full or ovelflow" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

int emptyy(node *ptr)
{
    if (ptr == NULL)
    {
        cout << " Stack is underflow or empty " << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

void printt(node *ptr)
{
    while (ptr != NULL)
    {

        cout << "Element is :- " << ptr->data << endl;
        ;
        ptr = ptr->next;
    }
}

node *pushh(node *ptr, int val)
{

    if (fulll(ptr))
    {
        cout << " Stack is overflow or full " << endl;
        return ptr;
    }
    else
    {
        node *p = new node();
        p->data = val;
        p->next = ptr;
        ptr = p;
        return ptr;
    }
}

void peekk(node *ptr, int position)
{

    for (int i = 1; (i < position && ptr != NULL); i++)
    {   // ye or niche wala dono same hai
        // for(int i = 0; (i < position - 1 && ptr != NULL); i++){
        ptr = ptr->next;
    }

    if (ptr != NULL)
    {
        cout << "Element At position "<<position<<" in stack is :- " << ptr->data << endl;
    }
}

void topp(node *ptr)
{
    cout << "Top Element of stack  is :- " << ptr->data << endl;
}

void lastt(node * ptr ){
   while(ptr->next != NULL){
       ptr=ptr->next;
   }
   cout<<"Last Element of Stack is "<<ptr->data<<endl;
}

int main()
{

    node *top = NULL;

    top = pushh(top, 65);
    top = pushh(top, 5);
    top = pushh(top, 55);
    top = pushh(top, 25);
    top = pushh(top, 34);

    printt(top);

    peekk(top, 3);
    topp(top);

    lastt(top);

    return 0;
}