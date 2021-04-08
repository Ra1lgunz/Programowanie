#include <iostream>
#include <cmath>

int main()
{
    int n,i;
    bool prime=true;
    std::cin>>n;

    for(i=2; i<= sqrt(n); i++)
    {
        if (n%i==0)
        {
        std::cout<<"nie jest to liczba pierwsza";
        prime = false;
        break;
        }
    }
    if (prime) std::cout<<"jest to liczba pierwsza";
    return 0;
}
