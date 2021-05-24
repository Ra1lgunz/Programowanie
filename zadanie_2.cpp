#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int *A=new int [n];
    int *B=new int [m];
    int *C=new int[n+m];

    for(int i=0;i<n;i++) //wpisac posortowana tablice
    {
        int x;
        cin>>x;
        *(A+i)=x;
    }

    for(int i=0;i<m;i++) //tu tez
    {
        int x;
        cin>>x;
        *(B+i)=x;
    }

    //--------------------------------

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

    //----------------------

    int i=0;
    int j=0;

    while (i+j<n+m)
    {
        if(i!=n && j!=m)
        {
            if(*(A+i)>*(B+j)) {*(C+i+j)=*(B+j);j++;}
            else {*(C+i+j)=*(A+i);i++;}
        }

        else if(i==n)
        {*(C+i+j)=*(B+j);j++;}

        else if(j==m)
        {*(C+i+j)=*(A+i);i++;}


    }

    delete []A;
    delete []B;

    //---------------------------

    for(int i=0;i<n+m;i++)
    {
        cout<<*(C+i)<<" ";
    }

    //----------------------
    delete []C;

    return 0;
}
