#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int **A=new int *[n];

    for(int i=0; i<n;i++)
    {
        *(A+i)=new int[i+1];
        for (int j=0;j<i+1;j++)
        {
            if (i==j||j==0) {*(*(A+i)+j)=1;}
            else {*(*(A+i)+j)=*(*(A+i-1)+j-1)+*(*(A+i-1)+j);}
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i+1;j++)
        {
            cout<<*(*(A+i)+j)<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        delete[] *(A+i);
    }

    delete[] A;

    return 0;
}
