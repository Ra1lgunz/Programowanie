#include <iostream>


int main()
{
    bool Z[10000];
    int n;


    for (int i=2; i*i<10000;i++)
    {
        if (Z[i]==false)
        {
            for (int j=2;i*j<10000;j++)
                Z[i*j]=true;
        }
    }

    while(true)
    {
        std::cout<<"Podaj liczbe, aby sprawdzic, czy jest pierwsza lub -1 aby wyjsc"<<std::endl;
        std::cin>>n;

        if (n==-1) return 0;
        else if(n==0 || n==1 || Z[n]==true) std::cout<<"To nie jest liczba pierwsza"<<std::endl;
        else std::cout<<"To jest liczba pierwsza"<<std::endl;
    }


    return 0;
}
