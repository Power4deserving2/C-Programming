#include <stdio.h>

int main()
{
    printf("Welcome to Immmanuel's App.\n");
    printf("Please choose what you wish to do with the app\n");
    printf("1. Adding a patient.\n");
    printf("2. Searching a patient.\n");
    printf("3. Releasing a patient.\n");
    printf("4. Exit.\n");

    int input;
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Please describe the patient you want to add.\n");
    }
    else if (input == 2)
    {
        printf("Please describe the patient you are searching for.\n ");
    }
    else if (input == 3)
    {
        printf("Please describe the patient you wish to release.\n");
    }
    else if (input == 4)
    {
        printf("You are now exiting the app.\n");

        printf("Would you like to save your changes? Y/N:  ");
        char ans;

        getchar();

        scanf("%c", &ans);
        if(ans == 'Y' || ans == 'y')
        {
            printf("Saving changes...\n");
        }
        else if(ans == 'N' || ans == 'n')
        {
            printf("Whatever man!!\n");
        }
        else
        {
            printf("Unethical haxing detected. Break down in 5.. 4.. 3.. 2.. 1.. BOOM!!!!\n");
        }
    }
    else 
    {
        printf("Invalid Entry!!");
    }
    printf ("Thankyou for your time in the app.\n");
    return 0;
}