#include<stdio.h>

int main(){
    int num;
    int count = 0;  
    // value insalize 

    printf("Enter number: ");
    scanf("%d",&num);

    do{
        num = num / 10;
        count++;
    }
    while (num != 0);  //not equal to zero

    printf("Total digits = %d\n", count);

    return 0;
}

// removes the last digit by dividing by 10
// increases the digit count
// repeats until the number becomes 0.