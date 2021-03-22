#include <iostream>


int main()
{
    int x,y,z;
    std::cin>>x>>y>>z;

    if(x==y || y==z || z==x)
    {
        std::cout<<"posrod tych liczb sa przynajmniej dwie rowne";
    }

    else
    {
        std::cout<<"kazda z liczb jest inna";
    }
    return 0;
}
