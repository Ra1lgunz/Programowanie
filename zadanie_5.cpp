#include <iostream>

int main()
{
    int a,b,i;
    std::cin>>a>>b;
    i=a*b;

    while (a!=b)
    {
        if(b>a) b-=a;
        else a-=b;
    }

    std::cout<<i/a;

    return 0;
}
