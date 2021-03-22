#include <iostream>


int main()
{
    int t1,t2,m,x;
    std::cin>>t1>>t2>>m;



    if (t2>t1)
    {
        x=(m*(t2-t1))/t1;
        std::cout<<x;
    }


    else
    {
        std::cout<<0;
    }

    return 0;
}
