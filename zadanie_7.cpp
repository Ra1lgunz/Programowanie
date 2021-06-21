#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    ifstream plik("election.txt");
    string line;
    int tab1[m]={0};
    int tab2[m]={0};

    while(!plik.eof())
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                getline(plik,line);
                if(i==line[0]-'0'){tab1[i]++;}
                if(i==line[2]-'0'){tab2[i]++;}
            }
        }
    }
    plik.close();

    int mx=0;
    int w=0;

    for(int i=0;i<m;i++)
    {
        if (tab[i]>mx) {mx=i;w=tab[i];}

    }

    if(w>(m/2.0))
    {cout << "Wygrywa kandydat o numerze: " <<mx<< endl;}

    else
        {
            int tab3[m];
            for(int i=0;i<m;i++)
            {
                tab3[i]=tab1[i]+tab2[i];
            }
            int mx2=0;
            int w2=0;

            for(int i=0;i<m;i++)
            {
                if (tab[i]>mx2) {mx2=i;w2=tab[i];}

            }

            cout << "Wygrywa kandydat o numerze: " <<mx2<< endl;
        }

    return 0;
}
