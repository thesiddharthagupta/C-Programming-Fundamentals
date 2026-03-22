#include<stdio.h>

int main(){
    int num;
    int sum = 0;
    int count = 0;
    float avg;

    do{
        printf("Enter number (0 to stop): ");
        scanf("%d",&num);

        if(num != 0){
            sum += num;
            count++;
        }

    } while(num != 0);

    if(count > 0){
        avg = (float)sum / count;
        printf("Average = %.2f\n", avg);
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}