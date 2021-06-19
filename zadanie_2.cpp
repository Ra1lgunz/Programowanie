#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik("Jabberwocky.txt");
    char letters[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int tab[26]={0};
    char l;

    while (!plik.eof())
    {
        plik>>l;
        if(l>=65 && l<=90)  tab[l-65]++;
        if(l>=97 && l<=122)  tab[l-97]++;
    }

    plik.close();

    for(int i=0;i<26;i++)
    {
        cout<<letters[i]<<" : "<<tab[i]<<endl;
    }

    return 0;
}
