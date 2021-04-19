#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    int B[12];
    int m=0;

    for(int i=0;i<12;i++)
    {
        B[i]=(std::rand()%10)+1; std::cout<<B[i]<<", ";
    }

    std::cout<<std::endl;

    //---------------------------------------

    for(int i=0;i<12;i++)
    {
        if (B[i]>m) m=B[i];

    }
    std::cout<<m;

    return 0;
}
