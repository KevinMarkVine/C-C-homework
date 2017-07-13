//按不同精度求圆周率
#include<iostream>
using namespace std;
double PI(double precision)
{
    double tmp(0);
    int i;
    for(i=1;1.0/(i*2-1)>precision;i++)
        tmp=tmp+1.0/(i*2-1)*(i%2?1:-1);
    return tmp*4;
}
int main()
{
    double a;
    cin>>a;
    cout<<PI(a)<<endl;
    return 0;

}
