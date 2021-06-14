#include <iostream>
#include <string>

using namespace std;

bool pal(string s)
{
    int i;
    int j=s.length()-1;

    for(int i=0;i<j;i++)
    {
        if(s[i]!=s[j]) {return false;}
        j--;
    }
    return true;
}

int main()
{
    string slowo;
    cin>>slowo;

    cout<<pal(slowo);

    return 0;
}
