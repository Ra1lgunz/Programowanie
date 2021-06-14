#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    cin>>tekst;

    int l=tekst.length();

    char letters[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int suma[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int ctr=0;

    for(int i=0;i<26;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(tekst[j]==letters[i]){ctr++;}
            suma[i]=ctr;
        }
        ctr=0;
    }

    for(int i=0;i<26;i++)
    {
        cout<<letters[i]<<" wystepuje: "<<suma[i]<<" razy"<<endl;
    }

    return 0;
}
