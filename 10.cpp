#include<iostream>
using namespace std;
int main()
{
    int j,k;
    for(j=0;j<=33;j++)
        for(k=0;k<=100;k++)
            if((5*(100-j-k)+3*j+k/3)==100&&k%3==0&&j+k<=100)
                cout<<"¼¦ÎÌ¡¢¼¦ÆÅ¡¢¼¦³û¸÷ÓÐ£º\t"<<100-j-k<<"\t"<<j<<"\t"<<k<<endl;
                return 0;

}
