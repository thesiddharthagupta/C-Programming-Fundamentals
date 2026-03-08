#include<stdio.h>
int main(){
    int n, multiple;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i<=10; i++){
    multiple = n * i;
    printf("%d\n",multiple);
    }
    return 0;
}