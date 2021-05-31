#include <iostream>
#include <climits>

using namespace std;

void memory_leak()
{
    int *T=new int[2147483640];
    for(int i=0;i<2147483640;i++)
    {
        *(T+i)=1;
    }

    while(true)
    {
        new int;
    }
}

int main()
{
    memory_leak();
    return 0;
}
