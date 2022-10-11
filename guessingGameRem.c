#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int Numbern= 5;
    int RandomNumber;
    int Number;
    printf("Welcome to my Immanuel's game of guessing numbers!!\n");
    srand(time(NULL)); 
    RandomNumber = rand() % (Numbern + 1);
    printf("%d\n", RandomNumber);
    printf("Please guess any number between 0 and %i\n", Numbern);
    printf("You can now guess the first number: ");
    scanf("%d", &Number);
    
    
    if(Number == RandomNumber )
    {

        printf("Look at your lucky self! You win! Congratulations!!\n");
    }
    else
    {

       printf("You lose !! Plz try again!\n"); 
    }

    printf("Thankyou for participating\n");
    return 0;
}