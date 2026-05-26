#include <stdio.h>

int main(void) {
    const int nRow = 3;
    const int nCol = 3;

    // For each rows
    for (int row = 0; row < nRow; row++) {

        // For each columns
        for (int col = 0; col < nCol; col++) {

            // Print the brick
            printf("#");       
        }
        printf("\n");
    }
}