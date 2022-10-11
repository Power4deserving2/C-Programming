#include <stdio.h>

int main()
{
    printf("Welcome to Immanuel's App on Pizza consumption.\n");
    int Slices;
    printf("How many Pizzas did you consume today in the free party.\n");
    scanf("%d", &Slices);

    switch (Slices)
    {
        case 0:
            printf("That is very much okay!!\n");
        break;
        case 1:
            printf("I hope you were two of you there.\n");
        break;
        case 2:
            printf("That is exclusively too much!\n");
        break;
        case 3:
            printf("Enjoy your heart disease!!!!\n");
        break;
        case 4:
            printf("I hope you are a billionare so you can start putting aside money for your surgeries.\n");
        break;
        default:
            printf("I really dont know your name, Can I call you Walking corpse. You are suicidal.\n");
        break;

    }
    int CalloriesPerSlice = 250;
    printf("The number of calories you have consumed is %d in only a day!!\n", CalloriesPerSlice * Slices);
    return 0;
}