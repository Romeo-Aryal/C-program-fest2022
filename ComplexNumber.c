#include <stdio.h>
struct Complex
 {int imag, real;
 }c1,c2,c3;
int main()
{
 printf("Enter Real part of number 1\n");
 scanf("%d",&c1.real);
 printf("Enter Imaginary part of number 1\n");
 scanf("%d",&c1.imag);
 printf("Enter Real part of number 2\n");
 scanf("%d",&c2.real);
 printf("Enter Imaginary part of number 2\n");
 scanf("%d",&c2.imag);
 c3.real=c1.real+c2.real;
 c3.imag=c1.imag+c2.imag;
 printf("Resultant Sum = %d + %di",c3.real,c3.imag);
 return 0;
}