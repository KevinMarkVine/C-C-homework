//输入一动态矩阵，计算乘积
//2016210817 毛凯
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m,n,l,i,j,k;
    cin>>m>>n>>l;//输入第一个矩阵的行列和第二个矩阵的列
    int **a=new int *[m];
    for(i=0;i<m;i++)
        a[i]=new int[n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    int **b=new int *[n];
    for(i=0;i<n;i++)
        b[i]=new int[l];
    for(i=0;i<n;i++)
        for(j=0;j<l;j++)
            cin>>b[i][j];
    int **c=new int *[m];
    for(i=0;i<m;i++)
        c[i]=new int[l];
    for(i=0;i<m;i++)
        for(j=0;j<l;j++)
    {
        c[i][j]=0;
        for(k=0;k<n;k++)//这里是列
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
          {
              cout<<c[i][j]<<" ";
          }
          cout<<endl;
    }
    return 0;
}
