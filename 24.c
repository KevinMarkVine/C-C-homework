#include<iostream>
#include<string.h>
using namespace std;
int SubStrNum(char *str,char *substr)
{
    int Num = 0;
    int h1,h2;
    int p1,p2;
    h1=strlen(str);
    h2=strlen(substr);
    p1=0;
    while(p1<h1)
    {
        p2=0;
        while(str[p1]==substr[p2]&&p2<h2&&p1<h1)
        {
            p1++;
            p2++;
        }
        if(p1==h1&&p2<h2)
            break;
        if(p2==h2)
            Num++;
        else
            p1=p1-p2+1;
    }
    return Num;
}
int main()
{
    char str[200];
    char substr[20];
    cout<<"input source string: ";
    cin>>str;
    cout<<"input sub string: ";
    cin>>substr;
    cout<<"match time: "<<SubStrNum(str,substr)<<endl;
    return 0;
}

