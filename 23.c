#include<iostream>
using namespace std;
int main()
{
    char str[1000];
    char c ='c';
    cin>>str;
    for(int i=0,j=0;str[i]!='\0';i++,j++)
        if(str[j]==c)
        i--;
        else
            str[i]=str[j];
        cout<<str<<endl;
    return 0;
}
