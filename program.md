#include<stdio.h>
int main()
{
  int a[100],i,n,sum=0;
  float average;
  printf("Enter number of  Integers:"); 
    scanf("%d",&n);
  printf("Enter the value of Integers :");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  printf("The sum is: %d\n",sum);
  average=sum/n;
  printf("Average is %.2f\n",average);
  for(i=0; i<n; i++)
    {
      if(a[i]>average)
      printf("The number greater than average is %d\n",a[i]);
    }
  for(i=0; i<10; i++)
  {
    if(a[i]<average)
    printf("The number smaller than average is %d\n",a[i]);
    }
   return 0;
 }
