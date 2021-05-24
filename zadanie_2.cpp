#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *A=new int [n];


    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        *(A+i)= x;
    }

    for(int i=0;i<n;i++)
    {
        if(*(A+i)>=0) {cout<<*(A+i)<<" ";}
        else if (*(A+i)<0)  {cout<<-(*(A+i))<<" ";}
    }

    delete []A;

    return 0;
}
