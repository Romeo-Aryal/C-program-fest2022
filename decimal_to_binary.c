#include <stdio.h>

int main()
{
    int dec,bin[10],i;
    printf("Enter Number in decimal : ");
    scanf("%d", &dec);
    for (i = 0; dec > 0; i++)
    {
        bin[i] = dec%2;
        dec = dec/2;
    }
    printf("Binary - ");
    for (i = i-1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    
}