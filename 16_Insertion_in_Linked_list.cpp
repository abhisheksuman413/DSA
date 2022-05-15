#include <bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node *next;
};

void print(node*ptr){
    while(ptr!=NULL){

        cout<<"element is :- "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
 
node* insert_in_first(node *head , int element){

    node* ptr = new node; 
    ptr->next=head;
    ptr->data=element;
    return ptr;


}

int main()
{

    node *head =new node;
    node *first =new node;
    node *second =new node;
    node *third =new node;
    
    head->data=13;
    head->next=first;

    first->data=11;
    first->next=second;

    second->data=17;
    second->next=third;

    third->data=15;
    third->next=NULL;

    print(head);
    head = insert_in_first(head , 55);
    cout<<"after inser "<<endl;
    print(head);
     
    
    return 0;
}