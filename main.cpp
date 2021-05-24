#include <iostream>

using namespace std;

int main()
{
    int A[]={2,6,5,1,3};
    int *p;
    p=A;

    cout << *p << endl; //Pokazuje wartosc A[0] (wypisze 2)
    cout << *p+2 << endl; //pokazuje wartosc A[0] zwiekszona o 2 (wypisze 4)
    cout << *(p+2) << endl; //pokazuje wartosc A[2] (wypisze 5)
    cout << &p << endl; //adres komorki A[0]
    cout << &p+1 << endl; //adres komorki A[0] przesuniety o 1
    cout << p << endl; //adres komorki A[0]
    cout << A << endl; //adres komorki A[0]
    cout << &A[0] << endl; //adres komorki A[0]
    cout << &A[0]+3 << endl; //adres komorki A[3]
    cout << A+3 << endl; //adres komorki A[3]
    cout << p+(*(p+4)-3) << endl; //adres komorki A[0]

    return 0;
}
