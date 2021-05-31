#include <iostream>

using namespace std;

int add (int x, int y){return x+y;}
int multiply (int x, int y){return x*y;}

int operation (int (*A)(int,int),int x, int y)
{
   return A(x,y);
}

int main()
{
    int x,y;
    cin>>x>>y;
    char o;
    cin>>o;
    if(o=='a') cout<<operation(add,x,y)<<endl;
    if(o=='m') cout<<operation(multiply,x,y);
    return 0;
}
