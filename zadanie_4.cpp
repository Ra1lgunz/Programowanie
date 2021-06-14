#include <iostream>
#include <string>

using namespace std;



bool dirty(string s)
{
    int l=s.length()-1;
    while(l>=0)
    {
        if((s[l]<'a'||s[l]>'z')&&(s[l]<'A'||s[l]>'Z')) {return true;}

        l--;
    }

    return false;
}

int main()
{
    string s;
    cin>>s;

    cout<<dirty(s);
    return 0;
}
