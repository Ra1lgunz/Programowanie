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
    int ctr=0;

    for(int i=0;i<n;i++)
    {
        *(A+i)=rand()%11;
    }

    for(int i=0;i<n;i++)
    {
        if (*(A+i)%2==0)ctr++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;
    cout<<"Liczb parzystych w tablicy A jest: "<<ctr;

    delete []A;

    return 0;
}
