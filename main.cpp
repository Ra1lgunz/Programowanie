#include <iostream>

int main()
{
    int A[5];
    int C[5];
    int n;

    std::cin>>n;

    for(int i=0;i<5;i++)
    {
        A[i]=2*i+1;
        std::cout<<A[i]<<", ";
        C[i]=A[i];
    }

    std::cout<<std::endl;

    //--------------------------------

    for(int j=0;j<5;j++)
    {
        A[(j+n)%5]=C[j];
    }

    for (int i=0;i<5;i++)
    {
        std::cout<<A[i]<<", ";
    }


    return 0;
}
