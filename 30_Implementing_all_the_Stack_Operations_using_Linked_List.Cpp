#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int emptyy(node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int fulll(node *ptr)
{
    node *p = new node();
    if (p == NULL)
    {

        return 1;
    }
    return 0;
}

void printt(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element is :- " << ptr->data << endl;
        ptr = ptr->next;
    }
}
void pushh(node **ptr, int val)
{
    if (fulll(*ptr))
    {

        cout << " Stack if full or overflow" << endl;
        
    }
    else
    {
        node *p = new node();
        p->data = val;
        p->next = *ptr;
        *ptr = p;
        
    }
}
// node *pushh(node *ptr, int val)
// {
//     if (fulll(ptr))
//     {

//         cout << " Stack if full or overflow" << endl;
//         return ptr;
//     }
//     else
//     {
//         node *p = new node();
//         p->data = val;
//         p->next = ptr;
//         ptr = p;
//         return ptr;
//     }
// }



void popp( node **ptr){
    
    if(emptyy(*ptr)){
        cout<<"Stack underflow of empty"<<endl;
    }
    else{
        node * p = *ptr;
        
        int x = p->data;
        *ptr=(*ptr)->next;
        cout<<x<<" is poped from the stack "<<endl;
        free(p);
        

    }
}
// node * popp( node *ptr){
    
//     if(emptyy(ptr)){
//         cout<<"Stack underflow of empty"<<endl;
//     }
//     else{
//         node * p = ptr;
        
//         int x = p->data;
//         ptr=ptr->next;
//         cout<<x<<" is poped from the stack "<<endl;
//         free(p);
//         return ptr;

//     }
// }


int main()
{

    node *top = NULL;
// pushinf element to stack with linkedlist 
    pushh(&top, 6);
    pushh(&top, 75);
    pushh(&top, 65);
    pushh(&top, 5);
    pushh(&top, 55);

    // top = pushh(top, 6);
    // top = pushh(top, 75);
    // top = pushh(top, 65);
    // top = pushh(top, 5);
    // top = pushh(top, 55);
    
    cout<<"pushing element to stack "<<endl;
    
    printt(top);

    cout<<"After poped element from stack "<<endl;
    // top = popp(top);
    // top = popp(top);
    // top = popp(top);

    popp(&top);
    popp(&top);
    popp(&top);
   

    return 0;
}