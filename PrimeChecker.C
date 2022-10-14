#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int input;
    printf("Please input the number you wish to check: ");
    scanf("%d", &input);
    int isPrime = true;
    for (int i = sqrt(input); i > 1; i--)
    {
        //printf("%d ", i);
        if(input % i == 0)
        {
            isPrime = false;
        }
    }
    if(isPrime)
    {
        printf("The number %d is Prime\n", input);
    }
    else
    {
        printf("The number %d is unfortunately not Prime!! \n", input);
    }
    return 0;
}