/*calculate factorial value of an integer using a function*/
#include<stdio.h>
int fact(int);
int main()
{
	int num;
	int factorial;
printf("\nEnter a Number:");
scanf("%d", &num );
factorial = fact(num);
printf("Factorial of %d = %ld\n",num,factorial);
return 0;
}
int fact(int num)
{
    int x;
    int factorial = 1;
    for(x=1; x<=num; x++)
    factorial = factorial*x ;
    return (factorial);
}
