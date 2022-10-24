#include <stdio.h>
/*****
*Author: Immanuel Peter.
*Description: Below hand is a simple program to aid in my practise for loops in C programming.
*****/

int main()
{
    int startNumber;
    int max;
    printf("Please input your starting number: ");
    scanf("%d", &startNumber);
    printf("Now give us your maximum value: ");
    getchar();
    scanf("%d", &max);
    //When using for loop, we first start with initialization, comparison, update.
    int i;
     printf("Here are the values from %d to your maximum value,%d\n", startNumber, max);
    for (; max > 0; max = max - 2)
    {
        printf("%d\n", max);
    }

    return 0;
}
