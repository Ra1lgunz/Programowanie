#include <iostream>

using namespace std;

long long silnia(int n)
{
    if(n==0 || n==1) return 1;
    else return silnia(n-2)*n;
}

int main()
{
    int n;
    cin>>n;
    cout << silnia(n) << endl;
    return 0;
}


