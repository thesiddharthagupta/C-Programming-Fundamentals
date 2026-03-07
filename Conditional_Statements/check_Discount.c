#include<stdio.h>

int main(){

    float total, discount, final_amount;

    printf("Enter Total Amount: ");
    scanf("%f",&total);

    if(total >= 500){
        discount = total * 0.10;
        final_amount = total - discount;

        printf("Discount: %.2f\n", discount);
        printf("Final Amount: %.2f\n", final_amount);
    }
    else{
        printf("No Discount Applied!\n");
        printf("Amount to Pay: %.2f\n", total);
    }

    return 0;
}