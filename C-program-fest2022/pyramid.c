#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of rows : ");  //to enter the row
    scanf("%d",&n);                         //to read the number
    printf("\nPyramid of * with %d rows:\n",n); 
    for(i=1;i<=n;i++)       // using loop printed lines
    {
        printf("\n");       //to print a line
        for(j=0;j<n-i;j++)  //loop to print space
        printf(" ");        //printed spaces
        for(j=0;j<2*i-1;j++)    //loop for creating *
        printf("*");        // * printed
    }
}
