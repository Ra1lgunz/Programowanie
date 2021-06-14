#include <iostream>
#include <string>

using namespace std;

string reverse(string s)
{
    int j=s.length()-1;

    for(int i=0;i<j;i++,j--)
    {
        swap(s[i],s[j]);
    }
    return s;
}

int main()
{
    string s;
    cin>>s;

    cout << reverse(s) << endl;
    return 0;
}
