//����,����ֱ����26����дӢ����ĸ
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