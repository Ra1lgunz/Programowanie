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
    std::cout<<"Srednie wierszy:"<<std::endl;

    for(int i=0;i<n;i++)
    {
        int s1=0;
       for(int j=0;j<n;j++)
       {
         s1+=C[i][j];
       }
       std::cout<<s1/7.<<", ";
    }


    std::cout<<std::endl;
    std::cout<<"Srednie kolumn:"<<std::endl;

    for(int i=0;i<n;i++)
    {
        int s2=0;
       for(int j=0;j<n;j++)
       {
         s2+=C[j][i];
       }
       std::cout<<s2/7.<<", ";
    }

    std::cout<<std::endl;

    return 0;
}
