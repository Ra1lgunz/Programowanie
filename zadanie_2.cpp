#include <iostream>

int main()
{
    int n,i,s;
    std::cin>>n;
    s=1;

    for (i=1;i<n+1;i++) s=s*i;

    std::cout<<s<<std::endl;

    return 0;
}
