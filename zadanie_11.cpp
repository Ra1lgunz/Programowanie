#include <iostream>
#include <string>

using namespace std;

string base2dec (string s,int base1)
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
        p*=base1;
    }

   dec=to_string(w);

   return dec;
}

string dec2base (string s,int base2)
{
    int l=stoi(s);

    int ctr;
    string out;

    while (l>=1)
    {
        ctr=l%base2;
        l=(l/base2);
        out=to_string(ctr)+out;
    }

    return out;
}

string change_base(string s, int base1, int base2)
{
    string out1,out2;
    out1=base2dec (s,base1);
    out2=dec2base (out1,base2);
    return out2;
}

int main()
{
    string s;
    int base1,base2;
    cin>>s>>base1>>base2;

    cout << change_base(s,base1,base2) << endl;
    return 0;
}
