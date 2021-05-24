#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int x,y,z;
    cin>>x>>y>>z;

    int ***A= new int**[x];

    for(int i=0;i<x;i++)
    {
        *(A+i)=new int *[y];

        for(int j=0;j<y;j++)
        {
            *(*(A+i)+j)=new int [z];

            for(int k=0;k<z;k++)
            {
                *(*(*(A+i)+j)+k)= rand()%100;
            }
        }
    }

    for(int i=0;i<x;i++)
    {
       for(int j=0;j<y;j++)
        {
            for(int k=0;k<z;k++)
            {
               cout<<"["<<i<<"]["<<j<<"]["<<k<<"] ="<<*(*(*(A+i)+j)+k)<<endl;
            }
        }
    }

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            delete []*(*(A+i)+j);
        }
    }

    for (int i=0;i<x;i++)
    {
        delete[] *(A+i);
    }

    delete[] A;

    return 0;
}
