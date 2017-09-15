//正向,逆向分别输出26个大写英文字母
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<26;i++)
        cout<<char('A'+i);
    cout<<endl;
    for( int i=0;i<26;i++)
        cout<<char('Z'-i);
    return 0;
}
