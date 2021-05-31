#include <iostream>

using namespace std;


int dzielniki(int x)
{
    int sum=0;
    int i=1;
    while(i<x)
    {
        if(x%i==0)
        {
            sum+=i;
        }
        i++;
    }
    return sum;
}

bool zaprzyjaznione(int n, int m)
{
    if(m!=n)
    {
        int sm,sn;
        sm=dzielniki(m);
        sn=dzielniki(n);
        if((sm==n)||(sn==m))
        {
            return true;
        }
        else return false;
    }
    return false;
}


int main()
{
    int n,m;
    cin>>n>>m;
    cout << zaprzyjaznione(n,m) << endl;
    return 0;
}
