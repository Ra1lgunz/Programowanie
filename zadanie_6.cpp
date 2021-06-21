#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    ifstream plik("election.txt");
    string line;
    int tab[m]={0};

    while(!plik.eof())
    {
        for(int i=0;i<m;i++)
        {
            getline(plik,line);
            if(i==line[0]-'0'){tab[i]++;}

        }
    }
    plik.close();

    int mx=0;

    for(int i=0;i<m;i++)
    {
        if (tab[i]>mx) mx=i;

    }

    cout << "Wygrywa kandydat o numerze: " <<mx<< endl;

    return 0;
}
