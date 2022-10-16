#include <stdio.h>

int main()
{
    int size = 5;
    int myGrades[size];
    myGrades[0] = 15;
    myGrades[1] = 20;
    myGrades[2] = 25;
    myGrades[3] = 30;
    myGrades[4] = 35;

    for (int i = 0; i < size; i++)
    {
        printf("%d \n", myGrades[i]);
    }
    return 0;
}