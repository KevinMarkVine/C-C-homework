//设计一重载函数add，分别进行字符型、浮点型、字符串型数的加法，返回结果
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int add(int x,int y)
{
    cout<<"(int,int)\t";
    return(x+y);
}
float add(float x,float y)
{
    cout<<"(float,float)\t";
    return x+y;
}
char *add(char *c1,char *c2)
{
    strcat(c1,c2);
    return c1;
}

int main()
{
   int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    float c,d;
    cin>>c>>d;
    cout<<add(c,d)<<endl;
    char c1[100]="Welcome to ",c2[10]="C++!";
    cout<<add(c1,c2)<<endl;


    return 0;
}
