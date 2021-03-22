#include <iostream>

int main()
{
    int p;
    std::cin>>p;

    if(p<0 || p>100)
    {
        std::cout<<"Zla ilosc punktow";
    }
        else if (p>=0 && p<50)
        {
        std::cout<<"niedostateczny";
        }
        else if (p>=50 && p<60)
        {
        std::cout<<"dostateczny";
        }
        else if (p>=60 && p<70)
        {
        std::cout<<"dostateczny plus";
        }
        else if (p>=70 && p<80)
        {
        std::cout<<"dobry";
        }
        else if (p>=80 && p<90)
        {
        std::cout<<"dobry plus";
        }
        else
        {
        std::cout<<"bardzo dobry";
        }

    return 0;
}
