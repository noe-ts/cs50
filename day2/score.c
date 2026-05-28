#include <stdio.h>

float average(int length, int numbers[]);

int main(void) {
    const int LEN = 3;
    int scores[LEN];
    
    for (int i = 0; i < LEN; i++) {
        int note;
        printf("Notes ?");
        scanf("%i", &note);
        scores[i] = note;
    }

    printf("Avg: %0.2f\n", average(LEN, scores));
}

float average(int length, int numbers[]) {
    int avg;

    for (int i = 0; i < length; i++) {
        avg += numbers[i];
    }

    return avg / (float) length;
}