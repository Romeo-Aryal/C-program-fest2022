//Program to swap two numbers
#include<stdio.h>
int main() 
{
    //declaring variables
  double first, second, x;
  //Asking for inputs
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  // value of first is assigned to x
  x = first;

  // value of second is assigned to first
  first = second;

  // value of x is assigned to second
  second = x;

  // Printing the result
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}