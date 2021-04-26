#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand( time( NULL ) );
    const int n=7;
    int C[n][n];

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
          C[i][j]=(rand()%21)-10;
          std::cout<<C[i][j]<<" ";
       }
       std::cout<<std::endl;
    }
    //-----------------------------------------
    std::cout<<std::endl;

    int w1=0,w2=0;
    int x=C[0][0];

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
         if (C[i][j]>x){x=C[i][j];w1=i;w2=j;}
       }
    }
    std::cout<<w1<<", "<<w2;


    return 0;
}
