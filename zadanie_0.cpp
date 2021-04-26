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

    return 0;
}
