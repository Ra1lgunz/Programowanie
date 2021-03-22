#include <iostream>


int main()
{
    int x,y,z;
    std::cin>>x>>y>>z;

    if(x<=y && y<=z)
    {
        std::cout<<"ustawione niemalejaco";
    }

    else
    {
        std::cout<<"nie ustawione niemalejaco";
    }
    return 0;
}
