#include<stdio.h>
int main()
{
    int num1, num2, ch, sum, diff;
    printf("\nMenu:\n");
    printf("1. sum of a number: ");
    printf("\n2. difference of a number: ");
    printf("\n3. multification of a number: ");
    printf("\n2. division of a number: ");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    printf("Enter a number:");
    scanf("%d%d", &num1,&num2);
    switch(ch)
    {
        case 1:
            sum = num1 + num2;  // variable is decleared
            printf("sum of %d and %d is %d ", num1, num2, sum);
            break;
        case 2:
            diff = num1 + num2;     // variable is decleared
            printf("difference of %d and %d is %d", num1, num2, diff);
            break;
        case 3:
            printf("multification of %d and %d is %d ", num1, num2, (num1 * num2));
            break;
        case 4:
            printf("division of %d and %d is %d ", num1, num2, (num1 / num2));
            break;
        default:
            printf("Invalid Choice!");
    }
    return 0;
}