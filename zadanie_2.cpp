#include <iostream>
#include <math.h>

using namespace std;


 int area (int a)
 {
     return a*a;
 }

 int area(int a, int b)
 {
     return a*b;
 }

 double area (double r)
 {
     return M_PI*r*r;
 }

int main()
{
    int a,b;
    double r;
    cin>>a>>b>>r;
    cout <<endl;
    cout<<"pole kwadratu: "<<area(a)<<endl;
    cout<<"pole prostokata: "<<area(a,b)<<endl;
    cout<<"pole kola: "<<area(r)<<endl;
    return 0;
}
