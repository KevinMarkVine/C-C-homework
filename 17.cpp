//�ж�����
#include<iostream>
#include<cmath>
using namespace std;
bool IsPrimeNumber(int number)
{
    int i;
    if(number<=1)
        return 0;
    for(i=2;i<=sqrt(number);i++)//�����С�ڵ��ڣ��ܶ������Ǵ��
        if(number%i==0)
        return 0;
    return 1;
}
int main()
{
    int x;
    cout<<"Input a number: ";
    cin>>x;
    if(IsPrimeNumber(x))
        cout<<"A prime number!"<<endl;
    else
        cout<<"Not a prime number!"<<endl;
    return 0;

}
