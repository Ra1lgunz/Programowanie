#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int *A=new int [n];
    int *B=new int [m];
    int *C=new int [n+m];
    srand(time(NULL));

    for(int i=0;i<n;i++)
    {
        *(A+i)=rand()%11;
        *(B+i)=rand()%11;
    }

    //-------------------------

     for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;

    for(int i=0;i<m;i++)
    {
        cout<<*(B+i)<<" ";
    }
    cout<<endl;

    //-------------------------

    for (int j=0;j<n+m;j++)
        {
            *(C+j)=0;
        }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            *(C+i+j)+=*(A+i)**(B+j);
        }
    }

    //---------------------

    delete []A;
    delete []B;

    for(int i=0;i<n+m-1;i++)
    {
        cout<<*(C+i)<<" ";
    }
    cout<<endl;

    delete []C;

    return 0;
}
