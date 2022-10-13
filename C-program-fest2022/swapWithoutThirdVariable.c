#include<stdio.h>  
 int main()    

{    

int a=3,b=4;      

printf("Before swap the value of a is %d and b is %d.",a,b);      

a=a+b;

b=a-b;  

a=a-b; 

printf("\nAfter swap the value of a is %d and the value of b is %d.",a,b);    

return 0;  

}   
