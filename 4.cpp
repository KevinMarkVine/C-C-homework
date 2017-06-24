#include<stdio.h>
#include<string.h>
#define N 80
int main()
{
    char str[N],strtemp[N];
    unsigned int i,j;
    printf("Input a string:");
    gets(str);
    for(i=0,j=0;j<strlen(str);i++)
       {
        if(str[i]!='c')
        strtemp[j++]=str[i];
       }
        strtemp[j]='\0';
    strcpy(str,strtemp);
    printf("After delete character \'c\':");
    printf("%s\n",str);
    return 0;
}
