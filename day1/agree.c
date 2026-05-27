#include <stdio.h>

int main(void) {
    char c;
    
    printf("Do you agree ?");
    scanf("%c", &c);

    if (c == 'y') {
        printf("User agree !\n");
    } else {
        printf("user doesn't agree.\n");
    }

    return 0;
} 