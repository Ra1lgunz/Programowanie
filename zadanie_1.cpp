#include <iostream>

int main()
{
    int x;
    std::cin>>x;

    if(x>0)
    {
        std::cout<<"Liczba jest dodatnia";
    }
    else if (x<0)
    {
        std::cout<<"Liczba jest ujemna";
    }
    else
    {
        std::cout<<"Podana liczba to 0";
    }
    return 0;
}
