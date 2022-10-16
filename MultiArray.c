#include<stdio.h>

int main ()
{
    int const rows = 4;
    int const columns = 3;
    int grades[][rows] = {
        {54, 87, 99},
        {98, 96, 100}, 
        {23, 43, 23},
        {56, 76, 82}
    };
    //printf("%d", grades[1][2]);
    
    for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < columns; k++)
        {
            printf("%d ", grades [i][k]);
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}