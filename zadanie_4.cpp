#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    int B[12];

    for(int i=0;i<12;i++)
    {
        B[i]=(std::rand()%10)+1; std::cout<<B[i]<<", ";
    }

    return 0;
}
