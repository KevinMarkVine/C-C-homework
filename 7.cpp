#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
    int t;
    t=x>y?x:y;
    return(t>z?t:z);
}
int min(int x,int y,int z)
{
    int t;
    t=x<y?x:y;
    return(t<z?t:z);
}
int dif(int x,int y, int z)
{
    return max(x,y,z)-min(x,y,z);

}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"MAX-MIN="<<dif(a,b,c)<<endl;
	return 0;
}
