#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 0.80;
    }
    else if (units <= 300) {
        bill = (200 * 0.80) + (units - 200) * 0.90;
    }
    else if (units <= 400) {
        bill = (200 * 0.80) + (100 * 0.90) + (units - 300) * 1.00;
    }
    else {
        bill = (200 * 0.80) + (100 * 0.90) + (100 * 1.00) + (units - 400) * 1.00;
    }

    // surcharge 
    if (bill > 400) {
        bill = bill + (0.15 * bill);
    }

    // minimum charge
    if (bill < 100) {
        bill = 100;
    }

    printf("Total bill = %.2f\n", bill);

    return 0;
}