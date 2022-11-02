#include <stdio.h>

//variable declaration
extern int c;
extern float f;

int main()
{
    //variable definition
    int a, b, c;
    float f;
    //Variable initialization
    a = 10, b = 20;

    // print out now
    c = a + b;
    printf("The value of c is, %d\n", c);
    
    f = a / b;
    printf("The value of f is, %f\n", f);

    return 0;//return value must be stated
}