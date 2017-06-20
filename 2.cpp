#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k,m,n,size;//i是打印的第几行，j是*数，size是行数，
    cout<<"Input size: "<<endl;
    cin>>size;
    if(size<=0||(size%2)==0)
    {
        cout<<"You have the wrong size!"<<endl;
        exit(-1);
    }
    for(i=1;i<=size;i++)
    {
        n=(i<=(size+1)/2)?i:size-i+1;
        n=2*n-1;
        m=(size-n)/2+28;
        for(k=1;k<=m;k++)
            cout<<" ";
        for(j=1;j<=n;j++)
            cout<<"*";
            cout<<endl;
    }
    return 0;
}
