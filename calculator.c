#include <stdio.h>

int main(void) {
    long dollars = 1;
    char res = 'y';

    do {
        printf("Double it and give %li€ to the next person ?", dollars);
        scanf(" %c", &res);
        
        dollars *= 2;
    } while (res == 'y');
}