#include <iostream>


int main()
{
    int x,y,z;
    std::cin>>x>>y>>z;

    if (x>=y)
    {
        if((z>=x)||(z>=y && z<=x)) std::cout<<y;
        else std::cout<<z;
    }

    else if (x<=y)
    {
        if((z>=y)||(z>=x && z<=y)) std::cout<<x;
        else std::cout<<z;
    }

    return 0;
}
