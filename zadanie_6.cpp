#include <iostream>
#include <string>

using namespace std;

bool pesel(string s)
{
    int j=s.length()-1;
    if(j==10)
    {
        int T[j];
        int sum=0;

       for (int i=0;i<j-1;i++)
       {
           T[i]=s[i] - '0';

           if(i%4==0) T[i]=T[i];
           else if(i%4==1) T[i]=T[i]*3;
           else if(i%4==2) T[i]=T[i]*7;
           else if(i%4==3) T[i]=T[i]*9;

            sum=sum+T[i];
       }

       T[j]=s[j]- '0';

       int m=sum%10;

       if(m==0 && T[j]== 0) return true;
       else if(m==0 && T[j]!= 0) return false;

       else if ((10-m)==T[j]) return true;
       else if ((10-m)!=T[j]) return false;

    }

    else return false;
}

int main()
{
    string s;
    cin>>s;

    cout << pesel(s) << endl;
    return 0;
}
