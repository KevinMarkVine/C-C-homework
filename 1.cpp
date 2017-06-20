#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Please input 3 numbers:";
    cin>>a>>b>>c;
    cout<<setw(8)<<setprecision(12);
    cout<<"the average of "<<a<<" "<<b<<" and "<<c;
    cout<<" is:"<<setw(20)<<(a+b+c)/3<<endl;
    return 0;
}
