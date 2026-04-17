#include<stdio.h>
// func defn
int greater(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int num,num2;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&num,&num2);

    int result = greater(num,num2);
    printf("%d is the greater number.\n", result);
    return 0;
}