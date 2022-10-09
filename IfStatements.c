#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool Pizza;//declare a variable
    int value;//declare an integer.
    //ask for the respondents thoughts.
    printf("Do you believe Pizza is nutritious? \n");
    //get an input or answer.
    scanf("%d", &value);
    //declare that the value is equal to the pizza
    Pizza = value;

        if (Pizza)
        {
            printf("Welcome to my app Dear Pizza lover :) \n");
        }
    printf ("The end!\n");

    return 0;
}