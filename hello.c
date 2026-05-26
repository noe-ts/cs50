#include <stdio.h>

/*
* getString
* A function to print a string given a question
*/
void getString(char *text) 
{
    char input[100];

    printf("%s ", text);
    scanf("%99s", input);
    printf("Bonjour, %s\n", input);
}

int main(void) 
{
    getString("Saisisez votre prénom");

    return 0;
}