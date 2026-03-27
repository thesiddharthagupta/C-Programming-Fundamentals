#include<stdio.h>

int sum(int a, int b){
    return a + b;
}

int diff(int a, int b){
    return a - b; 
}

int multi(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

int main(){
    int a,b, choice = -1;

    while(choice != 0){
        printf("\n");
        printf("Choose From Menu:\n");
        printf("1. Sum\n2. Difference\n3.Multiply\n4.Divide\n0 for quit\n");

        printf("Enter a operation (1-4) and 0 for quit: ");
        scanf("%d",&choice);

        if(choice >=1 && choice <= 4){
        printf("Enter value of a and b: ");
        scanf("%d%d",&a,&b);
    }

    if (choice == 1){
        printf("Sum of %d and %d is %d\n",a,b, sum(a,b));
    }

    else if (choice == 2){
        printf("Difference of %d and %d is %d\n",a,b, diff(a,b));
    }

    else if (choice == 3){
        printf("Multiple of %d and %d is %d\n",a,b, multi(a,b));
    }

    else if (choice == 4){
        if(b == 0){
            printf("Cannot divide by zero!\n");
        } else {
        printf("Divide of %d and %d is %d\n",a,b, divide(a,b));
        }
        }

    else if (choice == 0){
        printf("Exiting Program...\n");
    }
    else {
        printf("\nInvalid input! please select (1-4)\n");
    }
}
    return 0;
}

