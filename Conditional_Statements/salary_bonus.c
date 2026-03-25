#include<stdio.h>

int main()
{
    int salary, years;
    float bonus;
    char employee;

    printf("Enter your role (m for manager, e for employee): ");
    scanf(" %c", &employee);

    printf("Enter your salary: ");
    scanf("%d", &salary);

    printf("Enter years of experience: ");
    scanf("%d", &years);

    if (employee == 'm') {
        bonus = salary * (0.05 + 0.07 + 0.10);  // manager extra 10%
        printf("You got %.2f bonus\n", bonus);
    }
    else if (years >= 3) {
        bonus = salary * (0.05 + 0.07);
        printf("You got %.2f bonus\n", bonus);
    }
    else {
        printf("No bonus\n");
    }

    return 0;
}