#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{
    ofstream plik("time.txt");

    time_t czas;
    struct tm*data;
    char godzina[80];
    time(&czas);
    data=localtime(&czas);
    strftime(godzina,80,"%d.%m.%Y,%H:%M:%S",data);

    plik<< godzina;
    plik.close();
    return 0;
}
