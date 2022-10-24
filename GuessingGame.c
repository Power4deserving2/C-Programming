/**
 * Author : Immanuel Peter.
 * Description: Just a game that user has to guess a number between 0 - 5. 
 **/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //generate the pseudo number generator
    char Name[30];
    printf("Please Confirm your good name; \n");
    scanf("%29s", Name);
    printf("Dear %s, welcome to Immanuel's game of guessing numbers\n", Name);
    int number = 5;
    srand(time(NULL));
    int randomNumber = rand() % (number + 1);
    //ask user to guess 
    printf("%d\n", randomNumber);
    printf("Guess a number ranging from 1 - %i: \n", number);
    //receive the number
    int input;
    getchar();
    scanf("%i", &input);

    if(randomNumber == input)
    {
        printf("Look at your lucky self. You actually won!! Congratulations!!");
    }
    else
    {
        printf("I am afraid that is not correct, you lose!! Please try again");
    }

    return 0;

}
