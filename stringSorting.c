#include<stdio.h>
#include<conio.h>
#include<string.h>

void sort(char [][15],int);

void main()
{
	char list[10][15];
	int i,n;
	clrscr();
	printf("\nEnter number of strings : ");
	scanf("%d",&n);
	printf("\nEnter %d strings:\n",n);
	flushall();
	for(i=0;i<n;i++)
	gets(list[i]);
	sort(list,n);
	printf("\nSorted list:\n");
	for(i=0;i<n;i++)
	printf("\n%s",list[i]);
	getch();
}
void sort(char str[][15],int n)
{
	int i,j,swapped=1;
	char temp[15];
	for(i=0;i<n-1 && swapped;i++)
	{
		swapped=0;
		for(j=0;j<n-1-i;j++)
		if(strcmp(str[j],str[j+1])>0)
		{
			strcpy(temp,str[j]);
			strcpy(str[j],str[j+1]);
			strcpy(str[j+1],temp);
			swapped=1;
		}
	}
}

