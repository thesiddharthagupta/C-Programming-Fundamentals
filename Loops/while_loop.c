#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number: ");
    scanf("%d",&n);
    i = 0;
    while (i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}