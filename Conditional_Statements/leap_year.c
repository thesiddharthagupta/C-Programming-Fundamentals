#include<stdio.h>
int main(){
    int year;
    printf("ENter year: ");
    scanf("%d",&year);

    if (year % 400 == 0){
        printf("Entered year is Leap year\n");
    } else if (year % 100 == 0){
        printf("Entered Year is Not leap Year\n");
    } else if (year % 4 == 0) {
        printf("Entered Year is leap year\n");
    } else {
        printf("Entered year is Not leap year");
    }
    return 0;
}