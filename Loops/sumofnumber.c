#include<stdio.h>
int main(){
    int sum=0,n;    // sum = 0 used as container to store
    printf("ENter a numbers: ");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        sum += i;
        printf("sum of number is: %d", sum);

        return 0;
    }
}