#include<stdio.h>

    int diff(int a, int b){
        return a - b;
    }


int main(){
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);

    printf("Difference is %d\n", diff(a,b));
    return 0;
}