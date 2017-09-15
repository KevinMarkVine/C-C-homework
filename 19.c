//华氏与摄氏温度转化
#include<iostream>
using namespace std;
void Huashi(int q);
void Sheshi(int p);
int main()
{
    int a=0,b=0;
    cout<<"Please input your temperature: ";
    cin>>b;
    cout<<"Please choose the kind of temperature you what(Huashi(1) or Sheshi(2)): ";
    cin>>a;
    switch(a)
    {
        case 1: Huashi(b);break;
        case 2: Sheshi(b);break;
    }
    return 0;
}
void Huashi(int q)
{
    int m=0,n=q;
    m=(9/5.0*n+32+0.5);
    cout<<"The number you want is: "<<m<<endl;
}
void Sheshi(int p)
{
    int j,k=p;
    j=((5/9.0*(k-32))+0.5);
    cout<<"The number you want is: "<<j<<endl;
}
