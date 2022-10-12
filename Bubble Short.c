/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i,j,tem,n;

printf("How many elements are there in an array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter elements\n");
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(arr[j]>arr[j+1])
{
tem=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tem;
}
}
}
printf("\nsorted elements are\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
getch();
}
