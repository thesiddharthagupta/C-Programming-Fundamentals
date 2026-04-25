#include<stdio.h>
int main(){
    int units = 76;
    float bill = 0;
    
    // step 1 : first 10 units
    bill = 10 * 4;  //40

    bill = bill + (50 * 6);  //300

    // step 3: remaining units
    bill = bill + (units - 60) * 8;     // 16 * 8

    printf("Bill = %.2f", bill);

    return 0;

}