#include <stdio.h>

int main()
{
    printf("How much money do you have man? ");
    double money;
    scanf("%lf", &money);
    printf("What is the cost of the item you wish to purchase? ");
    double cost;
    getchar();
    scanf("%lf", &cost);

    money > cost ? printf("Yeah you can astually afford it!\n") : printf("Sorry bro.. You gotta get your money up by %lf. only that\n", cost - money);

    return 0;
}