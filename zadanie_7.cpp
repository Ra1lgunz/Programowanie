#include <iostream>

using namespace std;

void yes()
{
    cout<<"Yes!"<<endl;
}
void no()
{
    cout<<"No!"<<endl;
}

void vote(void (*A)())
{
    A();
}

int main()
{
    char x;
    cin>>x;
    if(x=='y') vote (yes);
    if(x=='n') vote (no);

    return 0;
}
