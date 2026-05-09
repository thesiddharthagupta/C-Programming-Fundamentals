#include<stdio.h>
int main(){
    int arr[5];

    for (int i = 0; i < 5; i++){        // input 5 values,
        printf("Enter values: ");
        scanf("%d",&arr[i]);
    }

    printf("\n Values are: \n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);     // output 5 values
    }
    return 0;
}