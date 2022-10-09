#include <stdio.h>
#include <math.h>

int main()
{
    //first declare the variables to be used.
    double a;
    double b;
    //inform user of the app.
    printf("This programm will calculate the hypotenuse of a right angled triangle; \n");
    // now ask for the first number
    printf("Kindly input the first number: \n");
    //the scanf will use lf 
    scanf("%lf", &a);
    //ask for the second number.
    printf("Kindly input the second number: \n");
    //still use the lf function as it is a double
    scanf("%lf", &b);//should not forget the format specifier &
    //write the formulae to be used
    double c = sqrt((a*a) + (b*b));
    //out the hypotenuse.
    printf("The hypotenuse to your lovely triangle is: %f\n", c);
    
        return 0;
}