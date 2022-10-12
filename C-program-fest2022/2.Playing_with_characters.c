/* The program takes a character, a string and a sentence and prints them.*/
/* You may find some hints to understand the code.*/
#include <stdio.h>  //.h are the extension of header file
#include <string.h>
#include <stdlib.h>

int main()
{   // char is a datatype.
    char ch,s[50],sen[100];
    printf("Enter the character\t: ");
    scanf("%c",&ch);//saves the character in ch
    printf("Enter the string\t: ");
    scanf("%s\n",&s);//saves the string in s

    printf("Enter the sentence\t: ");

    scanf("%[^\n]s",&sen);//saves the sentence in sen
    printf("\n\nYour inputs are :");
    printf("\n char = %c",ch);
    printf("\n string = %s",s);
    printf("\n sentence =%s",sen);

    return 0;
}
