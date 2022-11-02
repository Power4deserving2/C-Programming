#include <stdio.h>

#define LENGTH 30
#define WIDTH 10
#define NEWLINE '\n'

int main()
{
    //declare the variable area
    float AREA;

    // do the math.
    AREA = LENGTH * WIDTH;

    //print the answer.
    printf("The area is, %f", AREA);
    printf("%c", NEWLINE);
    //or the const at the bottom

    /*****
    const int  LENGTH = 10;
   const int  WIDTH = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
    ******/
    
    return 0;
}