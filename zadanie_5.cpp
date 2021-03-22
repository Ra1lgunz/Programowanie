#include <iostream>


int main()
{
    int x,y,z;
    std::cin>>x>>y>>z;

    if(x+y>z && z+x>y && z+y>x)
    {
        std::cout<<"Mozna zbudowac trojkat";
    }

    else
    {
        std::cout<<"nie mozna zbudowac trojkata";
    }
    return 0;
}
