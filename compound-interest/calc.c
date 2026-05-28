#include <stdio.h>



int main(void) {
    float deposit; // Initial deposit
    float interest; // Interest (%)
    float duration; // Duration (In years)
    float monthly_deposit; // Monthly deposit (In years)

    printf("Initial amount? ");
    scanf("%f", &deposit);

    printf("How many interest per years? ");
    scanf("%f", &interest);

    printf("For how many years? ");
    scanf("%f", &duration);

    printf("How many € will you deposit monthly? ");
    scanf("%f", &monthly_deposit);

    for (int i = 0; i < duration; i++) {
        deposit +=  monthly_deposit * 12;
        deposit *= 1 + (interest / 100); 
    }

    printf("In %0.2f years, you will have %0.2f€ !\n", duration, deposit);

    return 0;
}