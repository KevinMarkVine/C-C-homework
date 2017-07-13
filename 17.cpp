//判断素数
#include<iostream>
#include<cmath>
using namespace std;
bool IsPrimeNumber(int number)
{
    int i;
    if(number<=1)
        return 0;
    for(i=2;i<=sqrt(number);i++)//这里的小于等于，很多书上是错的
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
