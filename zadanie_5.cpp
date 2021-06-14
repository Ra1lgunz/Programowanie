#include <iostream>
#include <string>

using namespace std;

string filter(string s,char k)
{
    int l=s.length();
    string s2;
    for (int i=0;i<l;i++)
    {
        if(s[i]!=k) s2+=s[i];
    }
    return s2;
}

int main()
{
    string s;
    char k;

    cin>>s>>k;

    cout << filter(s,k) << endl;
    return 0;
}
