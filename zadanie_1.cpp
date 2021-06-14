#include <iostream>
#include <string>

using namespace std;

string first(string s1,string s2)
{
    if (s1<s2) {return s1;}
    else {return s2;}

}

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    cout<<first(s1,s2);

    return 0;
}
