#include<stdio.h>
int main(){
    int num,sum=0,i;
    printf("Enter any nth term: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum += i;  // sum = sum + i
    }
    printf("The Sum is: %d",sum);

    return 0;
}