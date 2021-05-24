#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *A=new int [n];
    int *B=new int [n];


    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        *(A+i)= x;
    }

    for(int i=0;i<n;i++)
    {
        *(B+i)= (*(A+i)%3);
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<*(B+i)<<" ";
    }

    delete []A;
    delete []B;

    return 0;
}
