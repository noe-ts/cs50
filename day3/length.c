#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name;
    printf("Votre prénom ?");
    scanf("%c", &name);

    printf("%i\n", strlen(name));

    for (int i = 0, n = strlen(name); i < n; i++) {
        printf("%c", toupper(name));
    }

    printf("\n");
}