#include <bits/stdc++.h>
using namespace std;
int abhji = 9;

class node
{
public:
    int data;
    node *next;
};
    node *top = NULL;       // yha ham globle varibale bna rhe hai 

    // niche function me top ko update krna pdega tb hi cahnge hoga 

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
    abhji = 0;
}

void pushh(int val)
{
    
    if (fulll(top))
    {

        cout << " Stack if full or overflow" << endl;
        
    }
    else
    {
        node *p = new node();
        p->data = val;
        p->next = top;
        top = p;    // yha top ko update kr rhe hai 
        
    }
}




void popp( node *ptr){
    
    if(emptyy(ptr)){
        cout<<"Stack underflow of empty"<<endl;
    }
    else{
        node * p = ptr;
        
        int x = p->data;
        top=ptr->next;       // yha top ko update kr rhe hai 
        cout<<x<<" is poped from the stack "<<endl;
        free(p);
        

    }
}


int main()
{

    pushh(75);
    pushh(65);
    pushh(5);
    pushh(55);

   
    cout<<"pushing element to stack "<<endl;
    
    printt(top);

    cout<<"After poped element from stack "<<endl;
   
// yha call by value kr rhe hai isliye top ko update krna pdega 
    popp(top);
    popp(top);
    popp(top);
   

    return 0;
}