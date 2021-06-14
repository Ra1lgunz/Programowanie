#include <iostream>
#include <string>

using namespace std;

string bin2dec (string s)
{
    int l=s.length()-1;

    int p=1;
    int w=0;
    int x;

    string dec;

    for(int i=l;i>=0;i--)
    {
        x=s[i]-'0';
        int z=x*p;
        w=w+z;
        p*=2;
    }

   dec=to_string(w);

   return dec;
}

int main()
{
    string s;
    cin>>s;
    cout<<bin2dec(s);

    return 0;
}
