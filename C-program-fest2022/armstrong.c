#include<stdio.h>
int main() 
{
    // An Armstrong number is one whose sum of digits raised to the power three equals the number itself
    //  input 153 --->1*1*1+5*5*5+3*3*3=153
    int n,r,arm=0,c;
   printf("enter any number");
    scanf("%d",&n);
     c=n;
    while(n>0) {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm) 
    printf("Amstrong number");
    else 
    printf("none");
    return 0;
}