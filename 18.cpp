//求x的y次方幂
#include<iostream>
using namespace std;
double power(double x,unsigned y)
{
    if(y==0)
        return 1;
    else
        return x*power(x,y-1);
}
int main()
{
    double x;
    unsigned y;
    cout<<"Input x,y:";
    cin>>x>>y;
    cout<<"power("<<x<<","<<y<<")="<<power(x,y)<<endl;
    return 0;
}
