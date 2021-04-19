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

    std::cout<<std::endl;

    //---------------------------------------

for (int i=0; i<12;i++)
    {
        for (int j=0;j<12;j++)
        {
        if (B[j]>B[j+1])
            std::swap (B[j],B[j+1]);
        }
    }

    for(int i=0;i<12;i++)
       {std::cout<<B[i]<<", ";}


    return 0;
}
