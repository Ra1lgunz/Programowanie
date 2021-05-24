#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int *wx=&x;
    int *wy=&y;
    cin>>x>>y;

    cout<<"x= "<<*wx<<", y= "<<*wy<<endl;

    swap(*wx,*wy);

    cout<<"x= "<<*wx<<", y= "<<*wy<<endl;

    return 0;
}
