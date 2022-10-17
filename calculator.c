#include <stdio.h>
int main() {
  char ch;
  double num1, num2;
  printf("Enter an operator (+, -, *, /): ");//basic arithmetic operators
  scanf("%c", &ch);
  printf("Enter two operands: ");//inputing 2 operands
  scanf("%lf %lf", &num1, &num2);

  switch (ch) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1+num2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1-num2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1*num2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1/num2);
      break;
    // invalid input for operator
    default:
      printf("Error! operator is not correct");
  }
  return 0;
}
