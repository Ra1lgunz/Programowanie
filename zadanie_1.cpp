#include <iostream>

int main()
{
    int n,i=0,f1,f2,fn;
    std::cin>>n;
    std::cout<<std::endl;

    f1=0;f2=1;

    while (i<n)
    {
        fn=f2+f1;
        std::cout<<f1<<std::endl;
        f1=f2;
        f2=fn;
        i++;
    }

    return 0;
}
