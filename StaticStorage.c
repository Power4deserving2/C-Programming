#include <stdio.h>

//function declaration.
void func(void);

static int count = 5;//global variable

int main ()
{
    while(count--)
    {
        func();
    }

    return 0;
}

//let us now deffine the function we declared
void func(void)
{
    static int i = 5; // local static variable
    i++;
    printf("The i is %d while the count is %d\n", i, count);
}
