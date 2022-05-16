#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void print_traversal(node *ptr)
{

    while (ptr != NULL)
    {

        cout << "element is :- " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// case 1 >>>> Deleting first node in lihnked list
node *delete_first_node(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//  case 2 >>> Deleting the node at the given index from the linked list

node *delete_node_at_index(node *head, int index)
{

    node *p = head;
    node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// case 3 >>> Deleting the last node from the given linked list
node *delete_last_node(node *head)
{

    node *p = head;
    node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    // p->next=NULL;   >>> niche ye v likh skte the
    p->next = q->next;
    free(q);
    return head;
}

// case 4 >>> Deleting the node with a given value from linked list

node *delete_node_with_givenDtat(node *head, int value)
{

    node *p = head;
    node *q = head->next;

    while (q->data != value && q->next != NULL)
    {

        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {

        p->next = q->next;
        free(q);
    }
    else
    {

        cout << "Value is not given in linked list so i can't delete anything " << endl;
    }
    return head;
}

int main()
{

    node *head = new node;
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fiveth = new node;

    head->data = 7;
    head->next = first;

    first->data = 11;
    first->next = second;

    second->data = 15;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 76;
    fourth->next = fiveth;

    fiveth->data = 35;
    fiveth->next = NULL;

    cout << "linkedlist before deletion " << endl;
    print_traversal(head);

    cout << "after deleting first node in linked list" << endl;
    head = delete_first_node(head);
    print_traversal(head);

    cout << "after deleting node from at given index" << endl;
    head = delete_node_at_index(head, 3);
    print_traversal(head);

    cout << "after deleting last node from linked list" << endl;
    head = delete_last_node(head);
    print_traversal(head);

    cout<<"after deleting node with given value from linked list"<<endl;
    head= delete_node_with_givenDtat(head,25);
    print_traversal(head);

    cout<<"by giveing wrong value in above function"<<endl;
    head= delete_node_with_givenDtat(head,33);
    print_traversal(head);


    return 0;
}