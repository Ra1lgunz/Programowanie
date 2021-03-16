#include <iostream>


int main()
{
    int x;
    std::cin>>x;

    if(x%2==0)
    {
        std::cout<<"Liczba jest parzysta";
    }
    else
    {
        std::cout<<"Liczba nie jest parzysta";
    }
    return 0;
}
