 //输入年月，输出该月天数
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int year,month,day;
    bool leap;
    cout<<"The year and month (month<=12) is: ";
    cin>>year>>month;
        if((year%400==0)||(year%4==0&&year%100!=0))
            leap=1;
        else
            leap=0;
        switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                {
                    day=31;
                    break;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                {
                    day=30;
                    break;
                }
            case 2:
                {
                    if(leap)
                        day=29;
                    else
                        day=28;
                    break;
                }
        }
        cout<<"days = "<<day<<endl;
    return 0;
}
