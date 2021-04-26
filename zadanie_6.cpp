#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand( time( NULL ) );
    const int a=20;
    const int b=3;
    int D[a][a][b];

    for(int i=0;i<a;i++)
    {
       for(int j=0;j<a;j++)
       {
          for(int k=0;k<b;k++)
            {
                D[i][j][k]=(rand()%255);
            }
       }
    }

    //---------------------------------

    for (int k=0;k<b;k++)
    {
       for(int i=0;i<a;i++)
       {
           for(int j=0;j<a;j++)
           {
               std::cout<<D[i][j][k]<<" ";
           }
            std::cout<<std::endl;
       }
       std::cout<<std::endl;
       std::cout<<std::endl;
    }

    return 0;
}
