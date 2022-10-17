#include<stdio.h>
void main() {
   int num1 = 1, num2 = 6, sum;
//assembly code segment
   asm {
      mov ax,num1
      mov bx,num2
      add ax,bx
      mov sum,ax
   }
   printf("sum= %d",sum);
}
