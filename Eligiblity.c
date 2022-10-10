// Program to display wheather you are eligible to vote or not.

#include <stdio.h>
int main() {
    int age;

    printf("Enter your age in integer: ");
    scanf("%d", &age);

    // true if number is less than 0
    if (number < 18) {
        printf("Sorry, you aren't eligible to vote.\n", number);
    }
    else
    printf("Congratulations, you are eligible to vote");

    return 0;
}