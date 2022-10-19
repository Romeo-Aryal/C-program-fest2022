#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet : ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n%c is a Vowel.\n", ch);
            break;
        default://cases other than vowels
            printf("%c is not a Vowel.\n", ch);
    }
    return 0;
}
