#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    int B[12];
    int d;
    int c=0, mc=0, n=0;


    for(int i=0;i<12;i++)
    {
        B[i]=(std::rand()%10)+1; std::cout<<B[i]<<", ";
    }

    std::cout<<std::endl;

    //---------------------------------------------

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

       std::cout<<std::endl;

    //------------------------------------------

       for (int i=0; i<12;i++)
       {
           if (n!=B[i])
            {
                if (c>mc)
                {
                    mc=c;
                    d=n;
                    c=0;
                }
                else c=0;
            }

            n=B[i];

            if (n==B[i])
            {
                c++;
            }
       }

       std::cout<<d;

    return 0;
}
