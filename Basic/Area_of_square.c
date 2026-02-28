#include<stdio.h>
int main(){
    int square, side;
    printf("Enter the side: ");
    scanf("%d", &side);

    square = side * side;
    printf("The Square is: %d", square);
    return 0;

}