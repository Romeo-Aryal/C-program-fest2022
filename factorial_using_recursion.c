#include <stdio.h>

//Recursive Function to find the Factorial

 int factorial(int number){
     if (number==1 || number==0)              //Terminating Condition of the Recursion
     {
         return 1;
     }
     else{
         return (number * factorial (number-1));      //Function calling itself
     }
 }
 
 
 //Main Function
 
 int main()
 {
     int a;
     printf("Enter a Number To Find The Factorial: ");
     scanf("%d", &a);                         //Taking the number as user-input
     if(a<0)                                  //Condition if provided number is less than 0 (means, Factorial not possible!)
     {
        printf("Enter a valid number!");
     }
     else
     {
        printf("The Factorial of %d is %d", a, factorial(a));     //If the number is greater than or equal to 0, it calls the Factorial Function
     }
     return 0;

 }
