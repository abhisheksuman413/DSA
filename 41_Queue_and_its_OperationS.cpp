#include <bits/stdc++.h>
using namespace std;

class queuee
{
public:
    int size;
    int frontend;
    int lastend;
    int *arrr;
};

int fulll(queuee *ptr)
{
    if (ptr->lastend == ptr->size - 1)
    {
        cout << "Queue is full " << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
int emptyy(queuee *ptr)
{
    if (ptr->frontend == ptr->lastend)
    {
        cout << " Queue is empty " << endl;
        return 1;
    }
    else
    {
        // cout << "Queue is not empty " << endl;   >> isko use nhi krege becouse bar bar aayega dequeue krne pe
        return 0;
    }
}

void enqueuee(queuee *&ptr, int val)
{
    if (fulll(ptr))
    {
        // cout << "Queue is full " << endl;    >> Yha pe ye likhne se dubara print hoga becouse full function me kr hi rhe hai
    }
    else
    {
        ptr->lastend++;
        ptr->arrr[ptr->lastend] = val;
    }
}

void  dequeuee(queuee *&ptr){
    if(emptyy(ptr)){

    }
    else{
        ptr->frontend++;
    }
}

void printt(queuee *ptr){
    for(int i=ptr->frontend+1; i <= ptr->lastend; i++){

        cout<<"Element is :- "<<ptr->arrr[i]<<endl;
    }
}

int main()
{
    queuee *abhi = new queuee();
    abhi->size = 10;
    abhi->frontend = -1;
    abhi->lastend = -1;
    abhi->arrr = new int[abhi->size];

    // abhi->arrr[0] = 3;
    // abhi->lastend++;
    // abhi->arrr[1] = 3;
    // abhi->lastend++;
    // abhi->arrr[2] = 3;
    // abhi->lastend++;
    // abhi->arrr[3] = 3;
    // abhi->lastend++;



    

    enqueuee(abhi ,98);
    enqueuee(abhi ,55);
    enqueuee(abhi ,37);
    enqueuee(abhi ,18);
    enqueuee(abhi ,6);
    printt(abhi);

    cout<<"After dequeue the queue is :-  "<<endl;
    dequeuee(abhi);
    dequeuee(abhi);
    printt(abhi);


   

    return 0;
}