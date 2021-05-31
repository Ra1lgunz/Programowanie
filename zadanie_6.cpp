#include <iostream>

using namespace std;


long long silnia(int n)
{
    long long s=1;

    if(n%2==1){
    for(int i=1; i<n+1; i+=2)
    {s=s*i;}}

    else if(n%2==0){
    for(int i=2; i<n+1; i+=2)
    {s=s*i;}}

    return s;
}

int main()
{
    int n;
    cin>>n;
    cout << silnia(n) << endl;
    return 0;
}
