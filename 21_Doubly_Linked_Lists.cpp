#include <bits/stdc++.h>
using namespace std;

class node {

    public:
    int data ;
    node * next;
    node * prev;
};

void print_traversal(node * head)
{
    while(head->next != NULL)
    {
        cout<<"element is :- "<<head->data<<endl;
        head=head->next;

    }
    cout<<"element is :- "<<head->data<<endl;
    cout<<"ulta print"<<endl;
    
    
    // do
    // {
    //     cout<<"element is :- "<<head->data<<endl;
    //     head=head->next;

    // }while(head->next != NULL);
            

    while(head != NULL)
    {
        cout<<"element is :- "<<head->data<<endl;
        head=head->prev;

    }
}

int main()
{

    node *head = new node;
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fiveth = new node;

    head->data=35;
    head->prev=NULL;
    head->next=first;


    first->data=65;
    first->prev=head;
    first->next=second;

    second->data=85;
    second->prev=first;
    second->next=third;
    

    third->data=55;
    third->prev=second;
    third->next=fourth;


    fourth->data=22;
    fourth->prev=third;
    fourth->next=fiveth;
    

    fiveth->data=15;
    fiveth->prev=fourth;
    fiveth->next=NULL;

    cout<<"Printing circular linked list "<<endl;
    print_traversal(head);
    
    return 0;
}