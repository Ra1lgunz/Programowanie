#include <iostream>
#include <cmath>

int main()
{
    int n,i,j;

    std::cin>>n;

    if (n==1) std::cout<<2<<std::endl;

    else {
            --n;
            std::cout<<2<<std::endl;
    for (i=3; n>0; i+=2)
    {bool prime=true;

        for(j=2; j<=sqrt(i); j++)
             {
                if (i%j==0)
                {
                    prime = false;
                    break;
                }
             }

                if (prime==true)
                {
                    std::cout<<i<<std::endl;
                    n--;
                }
             }
    }
    return 0;
}
