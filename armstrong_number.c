#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rem = 0;
    int ans = 0;
    int count = 0;
    int num;
    int mulnum = 1;
    int i;
    int temp;
    int temp1;
    int ansmul;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;
    temp1 = temp;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    while (temp != 0)
    {
        rem = temp % 10;
        for (i = 0; i < count; i++)
        {
            mulnum = mulnum * rem;
        }
        ans = ans + mulnum;
        temp = temp / 10;
        mulnum = 1;
    }
    if (ans == temp1)
    {
        printf("%d is an armstrong number", temp1);
    }
    else
    {
        printf("%d is not an armstrong number", temp1);
    }
}
