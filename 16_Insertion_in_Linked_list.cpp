#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
};

// This function is for traversal in linked list
void print_traversal(node *ptr)
{
    while (ptr != NULL)
    {

        cout << "element is :- " << ptr->data << endl;
        ptr = ptr->next;
    }
}
// Inserting node in first node of linked list
node *insert_in_first(node *head, int element)
{

    node *ptr = new node;
    ptr->next = head;
    ptr->data = element;
    return ptr;
}

// Inserting node in between two node of linked list
node *insert_in_between(node *head, int element, int index)
{
    node *ptr = new node;
    node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = element;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}
// Inserting  node  in last node 
node *insert_in_end(node *head, int element)
{
    node *ptr = new node;
    ptr->data = element;
    // node*p;
    
    node *p=head;
    while (p->next != NULL)
    {
        
       p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


// Inserting node in after given node 
node* inser_in_after_node(node*head, node*prvnode,int element){
    node*ptr=new node;
    ptr->data=element;

    ptr->next=prvnode->next;    // isko yhi pe likhna hoga iske niche nhi likh skte hai 
    prvnode->next=ptr;
    return head;
}


//  uper wale function ko ase v likh skte hai 

// void inser_in_after_node(node*prvnode,int element){
//     node*ptr=new node;
//     ptr->data=element;

//     ptr->next=prvnode->next;    // isko yhi pe likhna hoga iske niche nhi likh skte hai 
//     prvnode->next=ptr;
    
// }

int main()
{

    node *head = new node();
    node *first = new node();
    node *second = new node();
    node *third = new node();

    head->data = 13;
    head->next = first;

    first->data = 11;
    first->next = second;

    second->data = 17;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    print_traversal(head);
    head = insert_in_first(head, 55);
    cout << "after insert in first " << endl;
    print_traversal(head);

    cout << "after insert in between" << endl;
    head=insert_in_between(head, 65, 1);
    print_traversal(head);


    cout<<"after intser in last"<<endl;
    head=insert_in_end(head, 7);
    print_traversal(head);

    cout<<"after insert in after node"<<endl;
    head=inser_in_after_node(head,second,95);
    // inser_in_after_node(second,95);   >>>> agr uper me void function use kiye to fir ye use krege 
    print_traversal(head);

    



    return 0;
}