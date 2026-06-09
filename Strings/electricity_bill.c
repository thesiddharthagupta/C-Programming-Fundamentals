#include<stdio.h>
int main(){
    char name [50];
    int units;
    float bill, surcharge = 0;

    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter units  consumed: ");
    scanf("%d", &units);

    if (units <= 200){
        bill = units * 0.80;

    } else if (units <= 300){
        bill = (200 * 0.80) + (units - 200) * 0.90;

    } else {
        bill = (200 * 0.80) + (300 * 0.90) + (units - 300) * 1.00;
    }

    if (bill > 400){
        surcharge = 0.15 * bill;    // 15% is surcharge after 400->
    }
    bill += surcharge + 100;    // uses chaege is 100 

    printf("\n Customer: %s\n ", name);
    printf("Total Bill = Rs. %.2f\n", bill);


   return 0;

}