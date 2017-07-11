//求n的阶层，当结果超出范围时，显示溢出前的n的结果
#include<iostream>
using namespace std;
int main()
{
    unsigned long n,r(1),next(1);
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        r=r*i;
        next=r*(i+1);
        if(next<r)
        {
            cout<<i<<"!="<<r<<endl;
            break;
        }
    }
    if(i>n)
        cout<<i-1<<"!="<<r<<endl;
                return 0;

}
