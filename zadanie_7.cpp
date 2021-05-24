#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    int m=0;
    cin>>n;
    int *A=new int [n];
    srand(time(NULL));


    for(int i=0;i<n;i++)
    {
        *(A+i)=rand()%11;
    }

    for (int i=0;i<n;i++)
    {
        if(*(A+i)>m) m=*(A+i);
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }

    cout<<endl;
    cout<<m;



    delete []A;

    return 0;
}
