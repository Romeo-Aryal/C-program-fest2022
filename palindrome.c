#include<stdio.h>
#include<conio.h>

void main()
{
	char str[50];
	int i,j,palindrome=1;
	clrscr();
	printf("Enter a string : ");
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++)
	;
	for(i=0,j=j-1;i<j;i++,j--)
	if(str[i]!=str[j])
	{
		palindrome=0;
		break;
	}
	if(palindrome) printf("\n%s is palindrome",str);
	else printf("\n%s is not palindrome",str);
	getch();
}
