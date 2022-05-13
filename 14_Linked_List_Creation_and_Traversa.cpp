#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // yha node isliye likhe becouse agr int likhte to eak type ka data type hota
};

void print_linkedlist(node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"element is :- "<<ptr->data<<endl;
        cout<<"element is :- "<<ptr->next<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    node *head = new node;
    head->data = 23;
    head->next = NULL;

    node *third = new node; // yha isko isliye bnye next ka value yahi dal dege nhiche update nhi krna pdega

    node *second = new node;
    second->data = 22;
    second->next = third;

    head->next = second; // yha &second nhi likhge becouse second eak pointer hai or wo khud eak adress store kr rha hai

    third->data = 33;
    third->next = NULL;

    print_linkedlist(head);

    return 0;
}