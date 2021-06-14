#include <iostream>
#include <string>

using namespace std;

string convert(string liczba)
{
    int decimal[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string result;

    if (liczba.front()>='1' && liczba.front()<='9')
    {
        int dec_num=stoi(liczba);

        for(int i=0;i<13;i++)
        {
         while (dec_num%decimal[i]<dec_num)
         {
             result+=roman[i];
             dec_num-=decimal[i];
         }
        }
    }

    else
    {
        int dec_res=0;

        for(int i=0;i<13;i++)
        {
            while (liczba.find(roman[i])==0)
            {
                dec_res+=decimal[i];
                liczba.erase(liczba.find_first_of(roman[i]),roman[i].length());
            }
        }

        result=to_string(dec_res);
    }

   return result;
}


int main()
{
    string liczba;
    cin>>liczba;
    cout << convert(liczba) << endl;
    return 0;
}
