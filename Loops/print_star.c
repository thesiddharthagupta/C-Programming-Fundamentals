#include<stdio.h>
int main(){
    int i,j;
    //outer loop for rows
    for (i=1;i<=5;i++){
        //Inner loop for columns (stars)
        for (j = 1; j <= 5; j++){
            printf("* ");
        }
        // move to next line after one row
        printf("\n");

    }
    return 0;
}



