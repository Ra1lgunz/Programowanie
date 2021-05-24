#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ctr=0;
    int *A=new int [n];


    for(int i=0;i<n;i++)
    {
        if(ctr<100)
        {int x;
        cin>>x;ctr+=x;*(A+i)= x;}

        else if (ctr>=100)
        {
            for (int j=0;j<(n-i+1);j++){*(A+(i+j))= 0;}
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }

    delete []A;

    return 0;
}
