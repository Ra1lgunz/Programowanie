#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream plik("Jabberwocky.txt");
    int ctr=0;
    string word;

    while (plik>>word)
    {
        ctr++;
    }

    plik.close();
    cout<<ctr;

    return 0;
}
