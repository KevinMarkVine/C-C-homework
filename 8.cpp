#include<iostream>
using namespace std;
int fac(int n)
{
    int t;
    if(n==1)
       t=1;
    else
        t=n*fac(n-1);
    return(t);
}
int main()
{
    const int max_n=12;
    int n;
    cout<<"Input a integer number:";
    cin>>n;
    if(n>=1&&n<=max_n)
        cout<<"Factorial of "<<n<<" is: "<<fac(n)<<endl;
    else
        cout<<"Invalid n."<<endl;

    return 0;
}
