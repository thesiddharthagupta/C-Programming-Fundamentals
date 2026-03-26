#include<stdio.h>
int sum(int a, int b){
    return a + b;
}

int main(){
    int a , b;
    printf("Enter first Number: ");
    scanf("%d",&a);
    printf("Enter secound Number: ");
    scanf("%d",&b);

    int s = sum (a,b);
    printf("sum is: %d \n",s);

    return 0;

}