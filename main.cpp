#include <iostream>

int main()
{
    int n,i;
    std::cin>>n;
    i=1;

    while(n>=i)
    {
        if (n%i==0) std::cout << i << std::endl;
        i++;
    }

    return 0;
}
