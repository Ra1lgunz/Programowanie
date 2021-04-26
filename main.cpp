#include <iostream>

int main()
{
    const int n=7;
    int B[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
           if(i==j || j==0)
            B[i][j]=1;
           else
            B[i][j]=B[i-1][j-1]+B[i-1][j];
            std::cout<<B[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
