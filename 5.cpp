#include<iostream>
#include<string.h>
using namespace std;
#define N 100
int main()
{
	char str[N];
	int i;

	cin>>str;//gets(str);
	for (i = strlen(str) - 1; i >= 0; i--)
	{
		if (str[i] < 0)             //??????????????????
		{
			cout<<str[i-1]<<str[i];// £¡£¡£¡
			i--;// !!!
		}
		else
		{
			cout<<str[i];
		}
	}
	return 0;
}
