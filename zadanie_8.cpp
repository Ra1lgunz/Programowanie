#include <iostream>
#include <fstream>

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
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                getline(plik,line);
                int l=line.length()-1;

                for(int k=0;k<l;k++)
                {if(i==line[k]-'0'){tab[i]=(tab[i]+1)*(l-k);}}
            }
        }
    }
    plik.close();

    int mx=0;

    for(int i=0;i<=m;i++)
    {
        if (tab[i]>mx) mx=i;

    }

    cout << "Wygrywa kandydat o numerze: " <<mx<< endl;

    return 0;
}

