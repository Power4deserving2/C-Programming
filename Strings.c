#include <stdio.h>
#include <string.h>

int main()
{   
    printf("Kindly input your first name: \n");
    char FirstName[26];
    scanf("%25s", FirstName);
    printf("Good job!! Now give us your second name: \n");
    char SecondName[26];
    getchar();
    scanf("%25s", SecondName);

    printf("Dear %s %s, Welcome to Immanuel Peter's app. Immanuel Peter is the king and y'all know that!\n", FirstName, SecondName);

    //now I want to know the string count for bith names
    // For that we use a function called strlength but you must include the string header file
    int firstNameCharlength = strlen(FirstName);
    int secondNameCharLength = strlen(SecondName);

    printf("The character count to your first name is %d.\n", firstNameCharlength);
    printf("The character length to your second name is %d.\n", secondNameCharLength);
    printf("Adding both character lengths we get %d\n", firstNameCharlength + secondNameCharLength);
    return 0;
}