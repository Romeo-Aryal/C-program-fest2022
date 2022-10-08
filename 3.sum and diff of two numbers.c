//This program is to find the sun and difference of the integer and the floating digit.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;//stores the integer
    float c,d;//stores the floating digit
    printf("-----To add and subtract.-----\n");
    printf("Enter the two integers:\n");
    scanf("%d%d",&a,&b);
    printf("\nEnter the two floating digits:\n");
    scanf("%f%f",&c,&d);
    printf("\n\nFor integers :\n");
    printf("sum=%d\t diff=%d\n",a+b,a-b);
    printf("\nFor float :\n");
    printf("sum=%0.1f\t diff=%0.1f",c+d,c-d);

    return 0;
}
/*Hint
0.1f defines to give just a digit after the decimal.
0.2f for two digits and so on.
*/
