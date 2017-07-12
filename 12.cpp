//从键盘输入一个数，判断是几位数，逆向输出
#include<iostream>
using namespace std;
int main()
{
        int i;
        long long n,rn=0;
        cin>>n;
        for(i=0;i<10000000000;i++)
        {
            if(n>0)
            {
                rn=rn*10+n%10;
                n=n/10;
            }
            else
                break;
        }
        cout<<i<<"\n"<<rn<<endl;
        return 0;

}
