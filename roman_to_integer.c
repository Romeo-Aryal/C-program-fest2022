
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int romanToInt(char *s)
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {

        if (s[i] == 'I' && i != strlen(s) - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X'))
        {
            if (s[i + 1] == 'V')
            {
                k = k + 4;
            }
            else
            {
                k = k + 9;
            }
            i++;
            continue;
        }

        if (s[i] == 'I' && i != strlen(s) - 1 && (s[i + 1] != 'V' || s[i + 1] != 'X'))
        {
            k = k + 1;
            continue;
        }

        if (s[i] == 'I' && i == strlen(s) - 1)
        {
            k = k + 1;
            continue;
        }

        if (s[i] == 'V')
        {
            k = k + 5;
            continue;
        }
        if (s[i] == 'X' && i != strlen(s) - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C'))
        {
            if (s[i + 1] == 'L')
            {
                k = k + 40;
            }
            else
            {
                k = k + 90;
            }
            i++;
            continue;
        }

        if (s[i] == 'X' && i != strlen(s) - 1 && (s[i + 1] != 'L' || s[i + 1] != 'C'))
        {
            k = k + 10;
            continue;
        }

        if (s[i] == 'X' && i == strlen(s) - 1)
        {
            k = k + 10;
            continue;
        }

        if (s[i] == 'L')
        {
            k = k + 50;
            continue;
        }
        if (s[i] == 'C' && i != strlen(s) - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M'))
        {
            if (s[i + 1] == 'D')
            {
                k = k + 400;
            }
            else
            {
                k = k + 900;
            }

            i = i + 1;
            continue;
        }

        if (s[i] == 'C' && i != strlen(s) - 1 && (s[i + 1] != 'D' || s[i + 1] != 'M'))
        {
            k = k + 100;

            continue;
        }

        if (s[i] == 'C' && i == strlen(s) - 1)
        {
            k = k + 100;

            continue;
        }

        if (s[i] == 'D')
        {
            k = k + 500;

            continue;
        }
        if (s[i] == 'M')
        {
            k = k + 1000;

            continue;
        }
    }
    printf("%d", k);
    return k;
}
int main()
{
    char *s = (char *)malloc(sizeof(char));
    printf("Enter roman number use only I, V, C, D, M, L, X\n");
    scanf("%s", s);
    romanToInt(s);

    return 0;
}