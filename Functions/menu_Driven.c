#include<stdio.h>

int sum(int a, int b){
     return a + b; 
    }
int diff(int a, int b){
     return a - b; 
    }
int multi(int a, int b)
    { return a * b; }
    
int divide(int a, int b){ return a / b; }

int main(){
    int a, b, choice = -1;

    while(choice != 0){

        printf("\n");   
        printf("Choose From Menu:\n");
        printf("1. Sum\n2. Difference\n3. Multiply\n4. Divide\n0 for quit\n");

        printf("Enter operation: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter value of a and b: ");
                scanf("%d %d", &a, &b);
                printf("Sum = %d\n", sum(a,b));
                break;

            case 2:
                printf("Enter value of a and b: ");
                scanf("%d %d", &a, &b);
                printf("Difference = %d\n", diff(a,b));
                break;

            case 3:
                printf("Enter value of a and b: ");
                scanf("%d %d", &a, &b);
                printf("Multiply = %d\n", multi(a,b));
                break;

            case 4:
                printf("Enter value of a and b: ");
                scanf("%d %d", &a, &b);
                if(b == 0)
                    printf("Cannot divide by zero!\n");
                else
                    printf("Division = %d\n", divide(a,b));
                break;

            case 0:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid input! Please select (1-4) or 0.\n");
        }
    }

    return 0;
}