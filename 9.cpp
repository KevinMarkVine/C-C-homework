#include<iostream>
using namespace std;
int main()
{
    int f1(1),f2(1),m;
    cin>>m;
    cout<<f1<<"\t"<<f2<<"\t";
    for(int i=2;i<m;i++)
    {
        f2=f1+f2;
        f1=f2-f1;
        cout<<f2<<"\t";
        if((i+1)%5==0)cout<<endl;
    }
    return 0;

}
