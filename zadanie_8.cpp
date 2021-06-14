#include <iostream>
#include <string>

using namespace std;

string dec2bin (string s)
{
    int l=stoi(s);

    int ctr;
    string dec;

    while (l>=1)
    {
        ctr=l%2;
        l=(l/2);
        dec=to_string(ctr)+dec;
    }

    return dec;
}

int main()
{
    string s;
    cin>>s;
    cout<<dec2bin(s);

    return 0;
}
