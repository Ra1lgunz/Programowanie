#include <iostream>

int main()
{
    int const n=5;
    int A[n];
    int b=0;
    int c;

    for(int i=1;i<=9;i++)
    {
        if(i%2!=0) {A[b]=i; b++;}
    }

    //--------------------------------------

    for (int j=0; j<=(n/2); j++)
    {
        c=A[j];
        A[j]=A[n-1-j];
        A[n-1-j]=c;
    }

    for(int i=0;i<n;i++)
    {
        std::cout<<A[i]<<", ";
    }

    return 0;
}
