#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *A=new int [n];
    srand(time(NULL));


    for(int i=0;i<n;i++)
    {
        *(A+i)=rand()%11;
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;

    for(int i=0;i<n/2;i++)
    {
        swap(*(A+i),*(A+(n-i-1)));
    }

      for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }

    cout<<endl;


    delete []A;

    return 0;
}
