//lets try custom printf function, it will be fun haha

#include<stdio.h>
#include<stdlib.h>

void pprint(char str[],int n)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='%' && str[i+1]=='d')
        {
            putint(n);
            i+=2;
        }
        else
        {
            putch(str[i]);
            i++;
        }
    }
}

void putint(int n)
{
    printf("%d",n);
}
int main()
{
    int n=1;
    pprint("%d my name is nirajan",n);
    return 0;
}