 #include<stdio.h>
 int main()
 {
 	int num;
 	printf("Enter any integer number for check buzz or not:");
 	scanf("%d",&num);
 	if(num%10==7||num%7==0)
 		printf("%d is a Buzz number",num);
 	else
 		printf("%d is a Buzz not a number",num);
 	return 0;
 }