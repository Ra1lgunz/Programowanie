#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    int liczba = (std::rand()%100),i=0,n;

    while(i<10)
    {

        std::cin>>n;
        if (n>liczba) std::cout<<"Liczba jest mniejsza"<<std::endl;
        else if (n<liczba) std::cout<<"Liczba jest wieksza"<<std::endl;
        else {std::cout<<"zgadles liczbe"<<std::endl;break;}

        i++;
    }
    if (i<10)std::cout<<"wygrales po: "<<i+1<<" probach";
    else std::cout<<"przegrales";

    return 0;
}
