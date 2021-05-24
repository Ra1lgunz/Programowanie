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
        *(A+i)= *(A+i)=rand()%11;
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }

    delete []A;

    return 0;
}
