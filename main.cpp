#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    int B[12];
    int C[11]={0};
    int mw=0;

    for(int i=1;i<=12;i++)
    {
        B[i]=(std::rand()%10)+1;
        C[B[i]]++;
        std::cout<<B[i]<<", ";
    }

    std::cout<<std::endl;

    //--------------------------------------

    for (int j=0;j<11;j++)
    {
        if(C[j]>=mw) mw=j;
    }

    std::cout<<mw;


    return 0;
}
