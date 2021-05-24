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
    int tmp;
    int *wtmp=&tmp;

    //---------------------------

    for(int i=0;i<n;i++)
    {
        *(A+i)=rand()%11;
        *(B+i)=rand()%11;
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" "<<*(B+i)<<endl;
    }
    cout<<endl;
    //----------------------------

    cout<<endl;

    for(int i=0;i<n;i++)
    {
       *wtmp=*(A+i);
       *(A+i)=*(B+i);
       *(B+i)=*wtmp;
    }

    //---------------------------

   for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" "<<*(B+i)<<endl;
    }
    cout<<endl;

    //------------------------------

    delete []A;
    delete []B;

    return 0;
}
