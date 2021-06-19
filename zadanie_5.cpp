#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    int m,n;
    int tmp;
    cin>>n>>m;
    int tab[n][m];

    int votes[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            tab[i][j]=j;
    srand(time(NULL));

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            tmp=rand()%m;
            if(tab[i][tmp]==tmp)
            {
                votes[i][j]=tmp;
                tab[i][tmp]=-1;
            }
            else
                {
                    j--;
                }
        }

    }

    fstream plik("election.txt");
    plik.open("election.txt",ios::out);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            plik<<votes[i][j]<<" ";
        }
        plik<<endl;
    }

    plik.close();

    return 0;
}
