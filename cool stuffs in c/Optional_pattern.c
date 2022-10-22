// ---------------------> Created by  Shivam patel <--------------------

// Note -----------> If you have any other pattern then add in this <--------------
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int label1, label2;
    int i, j, k, m, v, n;

label2:
label1:
    v = 0;
    printf("\n|||||||||||||||| OPTIONAL PATTERN ||||||||||||||||");

    printf("\n----------------------------------------\n\n");
    printf("____________________\n");

    printf("1-butterfly \n2-heart \n3-Empty triangle\n4-Diamond\n5-Window\n6-Swastik\n7-Exit\n( !!! If you enter the any characters and numbers (0<n<8) then program will terminate )\n\n"); // This is for a list manager for user
    printf("____________________\n");
    printf("Enter no. of Which Pattern You Want : "); // Enter a number as declare in a list manager
    scanf("%d", &v);
    if (v >= 1 && v <= 7)
    {
        switch (v)
        {
        case 1: // For Butterfly pattern (made with 4 pyramid pattern)
            printf("\t\t BUTTERFLY\t\t\n");
            printf("Enter r:"); // enter half size for butterfly
            scanf("%d", &n);
            if (n > 2)
            {
                v = (2 * n) - 1;
                printf("Total Rows : %d \n", v);
                for (i = 0; i <= n; i++) // forloop for upper '2' pyramid pattern
                {

                    for (j = 1; j <= i; j++) // for print a '*'
                    {
                        printf("*");
                    }
                    for (k = 1; k <= n - i; k++) // for giving a 'space'
                    {
                        printf(" ");
                    }

                    for (k = n - 1; k >= i; k--) // for giving a 'space'
                    {
                        printf(" ");
                    }
                    for (j = 1; j <= i; j++) // for print a '*'
                    {
                        printf("*");
                    }

                    printf("\n");
                }

                for (i = n - 1; i >= 1; i--) // forloop for dowward '2'pyramid pattern
                {

                    for (j = 1; j <= i; j++) // for print a '*'
                    {
                        printf("*");
                    }
                    for (k = 1; k <= n - i; k++) // for giving a 'space'
                    {
                        printf(" ");
                    }

                    for (k = n - i; k >= 1; k--) // for giving a 'space'
                    {
                        printf(" ");
                    }
                    for (j = 1; j <= i; j++) // for print a '*'
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("ERROR ------- Enter n greater than 2 ");
            }

            break;
        case 2:
            printf("\t\tHEART\t\t\n"); // for heart pattern (made of '3' pyramid pattern)
            printf("Enter r:");        // for enter 1/3 size of pattern
            scanf("%d", &n);
            v = 3 * n;
            printf("total rows :%d \n", v);
            for (i = 1; i <= n; i++) // for 1st & 2nd pyramid pattern
            {

                for (k = 1; k <= n - i; k++) // for giving a 'space'
                {
                    printf(" ");
                }

                for (j = 1; j <= i; j++) // for print a '*'
                {
                    printf(" *");
                }

                for (k = n - i; k >= 1; k--) // for giving a 1st half 'space'
                {
                    printf(" ");
                }
                for (k = n - i; k >= 1; k--) // for giving a 2nd half 'space'
                {
                    printf(" ");
                }

                for (j = 1; j <= i; j++) // for print a '*'
                {
                    printf(" *");
                }

                printf("\n");
            }
            m = 2 * n;
            for (i = 1; i <= m; i++) // forloop for 3rd invrse pyramid pattern
            {

                for (k = 1; k <= i; k++) // for giving a 'space'
                {
                    printf(" ");
                }
                for (j = 0; j <= m - i; j++) // for print a '*'
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\t\tEMPTY TRIANGLE\t\t\n"); // for empty triangle
            printf("Enter r : ");
            scanf("%d", &n); // user definr rows
            if (n > 3)
            {

                printf("Total rows : %d\n", n); // output total rows
                printf("*\n");                  // for 1st star
                printf("* *\n");                // for 2nd two stars
                for (i = 0; i < n - 3; i++)
                { //'for' loop for 3rd line to last 2nd line
                  // execution stars
                    printf("*");

                    for (k = 0; k <= i; k++)
                    {
                        printf("  ");
                    }
                    printf(" *");
                    printf("\n");
                }
                printf("* ");
                for (i = 2; i <= n; i++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else
            {
                printf("ERROR ------- Enter n greater than 3 ");
            }

            break;
        case 4:
            printf("\t\tDIAMOND\t\t\n"); // diamond pattern
            printf("Enter Number : ");
            scanf("%d", &n); // user define
            v = 4 * n + 1;   // for calculate output total rows
            printf("total rows :%d \n", v);
            for (i = 0; i < n; i++)
            { // for 1st and 3rd triangle and 2nd ractangle
                for (k = n - 1; k >= i; k--)
                {
                    printf("  ");
                }
                for (j = 0; j <= i; j++)
                {
                    printf("* "); // for 1st traiangle
                }
                for (j = 0; j <= n; j++) // for ractangle
                {
                    printf("* ");
                }

                for (j = 0; j < i; j++)
                { // for 3rd triangle
                    printf("* ");
                }
                printf("\n");
            }
            m = 3 * n + 1;
            for (i = 1; i <= m; i++) // forloop for 3rd invrse triangle pattern
            {

                for (k = 1; k <= i; k++) // for giving a 'space'
                {
                    printf(" ");
                }
                for (j = 0; j <= m - i; j++) // for print a '*'
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 5:
            printf("\t\t WINDOW\t\t\n"); // window pattern
            printf("Enter rows (only odd and greater then 4) : ");
            scanf("%d", &n); // user define
            if (n % 2 != 0 && n > 4)
            {                    // only exicute odd and greater then 4
                m = (n - 3) / 2; // for some loops giving perfact rows
                for (i = 0; i < n; i++)
                { // for first line
                    printf("* ");
                }
                printf("\n");
                for (i = 0; i < m; i++) // for other lines of 3 star and spaces
                {
                    printf("*");
                    for (j = 2; j < n; j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for (j = 2; j < n; j++)
                    {
                        printf(" ");
                    }
                    printf("*\n");
                }
                for (i = 0; i < n; i++) // for 2nd full star line
                {
                    printf("* ");
                }
                printf("\n");
                for (i = 0; i < m; i++) // for other lines of 3 star and spaces
                {
                    printf("*");
                    for (j = 2; j < n; j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for (j = 2; j < n; j++)
                    {
                        printf(" ");
                    }
                    printf("*\n");
                }
                for (i = 0; i < n; i++) // for last full star line
                {
                    printf("* ");
                }
            }
            else // for terminate odd and less then 5 number
            {
                printf("enter only odd number or greater then 4");
            }
            break;
        case 6:
            printf("\t\t SWASTIK\t\t\n"); // Swastik pattern
            printf("Enter r:");           // n number user define
            scanf("%d", &n);
            m = 2 * n - 1;
            printf("Total rows in this pattern : %d\n", m); // print total required rows
            printf("* ");                                   // for 1st  star

            for (i = 0; i < n - 2; i++) // if n=5 then giving 3 space
                printf("  ");
            // if n=5 , then *       * * * * *
            for (i = 0; i < n; i++) // if n=5 then print other 5 star
                printf("* ");

            printf("\n");

            for (j = 0; j < n - 2; j++) // there is i for rows and j for column
            {
                printf("* ");
                for (i = 0; i < n - 2; i++)
                    printf("  ");
                printf("* \n");
            }

            for (i = 0; i < n * 2 - 1; i++) // for middle line
                printf("* ");               // if n=5 then middle line have 9 stars
            printf("\n");

            for (j = 0; j < n - 2; j++) // 2nd down star loops
            {
                for (i = 0; i <= n - 2; i++)
                    printf("  ");
                printf("* ");
                for (i = 0; i < n - 2; i++)
                    printf("  ");
                printf("* \n");
            }

            for (i = 0; i < n; i++) // if n=5 then , * * * * *      *
                printf("* ");
            for (i = 0; i < n - 2; i++)
                printf("  ");
            printf("* ");
            break;
        case 7:
            exit(0);

        default:
            goto label2;
        }

        goto label1;
    }
    else
    {
        printf("ERROR !!!  Enter valid number  ");
    }

    return 0;
}
