//Program to print fibonacci triangle
#include<stdio.h>    
int main()
{  
   int a=0,b=1,i,c,limit,j;    
  //Asking for input
    printf("Enter the limit:");    
    scanf("%d",&limit);
    //for loop to print traingle   
    for(i=1;i<=limit;i++)    
    {    
        a=0;    
        b=1;    
        printf("%d\t",b);    
        for(j=1;j<i;j++)    
        {    
            //to print fibonacci series
            c=a+b;    
            printf("%d\t",c);    
            a=b;    
            b=c;    
    
        }    
        printf("\n");    
    }    
return 0;  
}  