#include <iostream>
#include <string>

using namespace std;

string con(string s1,string s2)
{
    return s1+s2;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    cout << con(s1,s2) << endl;
    return 0;
}
