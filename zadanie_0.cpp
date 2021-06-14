#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    ifstream plik("Jabberwocky.txt");

    if (plik.is_open())
    {
        string wiersz;

        while (getline(plik,wiersz))
        {
            cout<<wiersz<<endl;
        }
    }

    return 0;
}
