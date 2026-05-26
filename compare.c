#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("What's X ? ");
    scanf("%i", &x);

    printf("What's Y ? ");
    scanf("%i", &y);

    if (x > y) {
        printf("%i is greater than %i\n", x, y);
    } 
    else if (x < y) {
        printf("%i is smaller than %i\n", x, y);
    } 
    else {
        printf("Y == X\n");
    }

    return 0;
}