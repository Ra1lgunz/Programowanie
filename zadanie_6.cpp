#include <iostream>

int main()
{
    int xa,ya,ra,xb,yb,rb;

    std::cout<<"Parametry pierwszego kola (x,y,r):"<<std::endl;
    std::cin>>xa>>ya>>ra;

    std::cout<<"Parametry drugiego kola (x,y,r):"<<std::endl;
    std::cin>>xb>>yb>>rb;

    if ((((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)))<=((ra+rb)*(ra+rb)))
        {
            std::cout<<"Kola maja niepuste przeciecie";
        }
    else
        {
        std::cout<<"Kola nie maja niepustego przeciecia";
        }
    return 0;
}
