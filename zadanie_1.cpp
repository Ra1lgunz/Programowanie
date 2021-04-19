#include <iostream>
#include <math.h>

int main()
{
    int A[5];
    int b=0;
    float a=0,g=1,k=0,h=0;

    for(int i=1;i<=9;i++)
    {
        if(i%2!=0) {A[b]=i;std::cout<<A[b]<<", "; b++;}
    }

    //----------------------------------------------------------

    for(b=0; b<5;b++)
    {
        a+=A[b];
    }
    a=a/5;
    std::cout<<"Srednia arytmetyczna: "<<a<<std::endl;

    //---------------------------------------------------------

    for(b=0; b<5;b++)
    {
        g*=A[b];
    }
    g=exp(log(g)/5);
    std::cout<<"Srednia geometryczna: "<<g<<std::endl;

    //---------------------------------------------------------

    for(b=0; b<5;b++)
    {
        k+=(A[b]*A[b]);
    }
    k=sqrt(k/5);
    std::cout<<"Srednia kwadratowa: "<<k<<std::endl;

    //---------------------------------------------------------

    for(b=0; b<5;b++)
    {
        h+=(1.0/A[b]);
    }
    h=5/h;
    std::cout<<"Srednia harmoniczna: "<<h<<std::endl;

    return 0;
}
