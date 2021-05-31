#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n==1 || n==2) return 1;

    else if (n>2){
            int f1,f2,fn;
            int i=1;

            f1=0;f2=1;

        while (i<n)
        {
            fn=f2+f1;

            f1=f2;
            f2=fn;
            i++;
        }

    return fn;}
}

int main()
{
    int n;
    cin>>n;
    cout << fibonacci(n) << endl;
    return 0;
}
