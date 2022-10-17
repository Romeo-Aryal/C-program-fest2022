#include <stdio.h>
int main() {
   int y;//inputting year
   printf("Enter a year: ");
   scanf("%d", &y);
   if (y % 400 == 0) {
      printf("%d is a Leap year.", y);
   }
   else if (y % 100 == 0) {
      printf("%d is not a Leap year.", y);
   }
   else if (y % 4 == 0) {
      printf("%d is a leap year.", y);
   }
   // all other cases are not leap year
   else {
      printf("%d is not a Leap year.", y);
   }
   return 0;
}
