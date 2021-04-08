#include <iostream>

int main()
{
    int a,b;
    std::cin>>a>>b;

    while (a!=b)
    {
        if(b>a) b-=a;
        else a-=b;
    }
    std::cout<<a;

    return 0;
}
