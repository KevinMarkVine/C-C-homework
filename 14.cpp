 //通过π/4=1-1/3+1/5-1/7...求出π
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        int i;
        double PI(0);
        for(i=1;1.0/(i*2-1)>1e-8;i++)
            PI=PI+1.0/(i*2-1)*(i%2?1:-1);
            PI=PI*4;
        cout<<PI<<endl;
        return 0;
}
