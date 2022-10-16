#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char player1[10], player2[10];
    int in1, in2;
    printf("HELLO, WELCOME TO ROCK, PAPER, SCISSORS GAME\nWhat is player1's name?\n ");
    scanf("%s", &player1);
    printf("What is player2's name?\n ");
    scanf("%s", &player2);

    printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n", player1, player2);
    printf("Now let us start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n", player1);
    scanf("%d", &in1);
    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n", player2);
    scanf("%d", &in2);

    if ((in1 == 1 && in2 == 1) || (in1 == 2 && in2 == 2) || (in1 == 3 && in2 == 3))
        printf("Neither %s nor %s won, it is a draw", player1, player2);

    else if ((in1 == 1 && in2 == 3) || (in1 == 3 && in2 == 2) || (in1 == 1 && in2 == 3) || (in1 == 2 && in2 == 1) || (in1 == 3 && in2 == 2) || (in1 == 1 && in2 == 3))
        printf("Congrats %s! You won!!!!", player1);

    else if ((in1 == 1 && in2 == 2) || (in1 == 3 && in2 == 1) || (in1 == 1 && in2 == 2) || (in1 == 2 && in2 == 3))
        printf("Congrats %s! You won!!!!", player2);
    return 0;
}