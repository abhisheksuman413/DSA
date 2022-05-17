#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void print_traversal(node *head)
{

    node *ptr = head;

    do
    {
        cout << "element is :- " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

void inset_at_head(node*(&head), int element)
{
    node *p = head->next;
    node *q = new node;
    q->data = element;

    while (p->next  != head)
    {

        p = p->next;
    }

    //  ab yha pe p last node ko point kr rha hai 

    q->next =p->next;
    p->next = q;
    head=q;
    // return head;
}

//  >>>>>> uper wale function ko ase v likh skte hai <<<<<

// node * inset_at_head(node * head, int element)
// {
//     node *p = head->next;
//     node *q = new node;
//     q->data = element;

//     while (p->next  != head)
//     {

//         p = p->next;
//     }

//     //  ab yha pe p last node ko point kr rha hai 

//     q->next =p->next;
//     p->next = q;
//     head=q;
//     return head;
// }

int main()
{

    node *head = new node;
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fiveth = new node;

    head->data = 35;
    head->next = first;

    first->data = 21;
    first->next = second;

    second->data = 25;
    second->next = third;

    third->data = 33;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = fiveth;

    fiveth->data = 15;
    fiveth->next = head;

    cout << "printing circular linked list" << endl;
    print_traversal(head);

    cout << "after insrting node at head in linked list" << endl;
    inset_at_head(head, 75);
    //head = inset_at_head(head, 75);    >>> agr uper duse trika se function ko likhe to use it 
    print_traversal(head);

    return 0;
}