#include <iostream>

int main()
{
    int A[5];
    int b=0;

    for(int i=1;i<=9;i++)
    {
        if(i%2!=0) {A[b]=i; std::cout<<A[b]<<", "; b++;}
    }

    return 0;
}
