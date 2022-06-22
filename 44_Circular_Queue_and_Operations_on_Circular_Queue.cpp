#include <bits/stdc++.h>
using namespace std;

class Circular_Queuee
{
public:
    int frontend;
    int lastend;
    int size;
    int *arrr;
};

int fulll(Circular_Queuee *ar)
{

    if ((ar->lastend + 1) % ar->size == ar->frontend)
    {
        cout << "Circular Queue is full " << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

int emptyy(Circular_Queuee *ar)
{
    if (ar->frontend == ar->lastend)
    {

        cout << "Circular Queue is empty " << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueuee(Circular_Queuee *ar, int val)
{
    if (fulll(ar))
    {
    }
    else
    {
        ar->lastend = (ar->lastend + 1) % ar->size;
        ar->arrr[ar->lastend] = val;
    }
}

void dequeuee(Circular_Queuee *ar)
{
    // int val ;
    ar->frontend = (ar->frontend + 1) % ar->size;
    int val = ar->arrr[ar->frontend];
    cout << "The Deueue element is :- " << val << endl;
}

void printt(Circular_Queuee *ar)
{
    if (emptyy(ar))
    {
    }
    else
    {
        if(ar->lastend < ar->frontend)
        {
            for (int i = ar->frontend + 1; i <= ar->size-1; i++)
            {
                cout << "The Element is :- " << ar->arrr[i] << endl;
            }
            int q = 0;
            while(q != ar->frontend)
            {
                cout<<"The Element is :- "<<ar->arrr[q]<<endl;
                q++;
            }
        }
        else
        {
            for (int i = ar->frontend + 1; i <= ar->lastend; i++)
            {
                cout << "The Element is :- " << ar->arrr[i] << endl;
            }
        }
    }
}

int main()
{
    Circular_Queuee *abhi = new Circular_Queuee();
    abhi->size = 15;
    abhi->frontend = 0;
    abhi->lastend = 0;
    abhi->arrr = new int[abhi->size];

    enqueuee(abhi, 65);
    enqueuee(abhi, 5);
    enqueuee(abhi, 55);
    enqueuee(abhi, 21);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 97);
    enqueuee(abhi, 100);
    enqueuee(abhi, 25);

    printt(abhi);

    dequeuee(abhi);
    dequeuee(abhi);

    enqueuee(abhi, 36);
    enqueuee(abhi, 22);
    printt(abhi);
    return 0;
}