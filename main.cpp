#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int *A=new int [x];



    for(int i=0;i<x;i++)
    {
        *(A+i)= pow(2,i);
    }

    for(int i=0;i<x;i++)
    {
        cout<<*(A+i)<<" ";
    }

    delete []A;

    return 0;
}
