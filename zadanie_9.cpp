#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *A=new int [n];
    int *B=new int [n];
    srand(time(NULL));
    int m;
    cin>>m;

    for(int i=0;i<n;i++)
    {
        *(A+i)=rand()%11;
        *(B+i)=*(A+i);
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
       *(A+i)=*(B+((((i+m)%n)+n)%n));
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;


    delete []A;
    delete []B;

    return 0;
}
