#include<stdio.h>

// square function
int square(int num){
    return num * num;
}

// cube function
int cube(int num){
    return num * num * num;
}

int main(){
    int num, choice;
    
    printf("1. Square\n2. Cube\n");

    printf("Enter a choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    if (choice == 1){
        printf("Square of %d is %d\n", num, square(num));
    } 
    else if (choice == 2){
        printf("Cube of %d is %d\n", num, cube(num));
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}