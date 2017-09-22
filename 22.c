//´òÓ¡Ñî»ÔÈı½Ç
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int MaxN=10;
    int a[MaxN][MaxN];
    for(int i=0;i<MaxN;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(int j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(int i=0;i<MaxN;i++)
        {
            cout<<setw((MaxN-i)*5/2);
            for(int j=0;j<=i;j++)
            cout<<a[i][j]<<setw(5);
            cout<<endl;
        }
    return 0;
}
