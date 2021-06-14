#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string palindrom(string s)
{
    int i;
    int j=s.length()-1;

    for(int i=0;i<j;i++)
    {
        swap(s[i],s[j]);
        j--;
    }
    return s;
}

int main()
{
    ifstream odczyt("Palindromy.txt");
    ofstream zapis("Ymordnilap.txt");

    string word;

    while (getline(odczyt,word))
    {
        if(word[0]>='A' && word[0]<='Z')
            {zapis<<word<<endl;}
        else {zapis<< palindrom(word)<<endl;}
    }

    zapis.close();

    return 0;
}
