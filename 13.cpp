//判断回文数
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100], *pStart, *pEnd;
    int len;
    cout<<"Input String: ";
    cin>>str;
    len=strlen(str);
    pStart = str;
    pEnd = str +len-1;
    while (*pStart == *pEnd && pStart <= pEnd)
        {
            pStart++;
            pEnd--;
        }
        if(pStart <pEnd)
            cout<<"No!\n";
        else
            cout<<"Yes!\n";
        return 0;
}
