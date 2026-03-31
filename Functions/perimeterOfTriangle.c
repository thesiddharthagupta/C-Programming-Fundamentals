#include<stdio.h>

int triangle(int a, int b){
    return (2*(a+b));
}

int main(){
    int a,b;

    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);

    printf("Perimeter of Triangle: %d\n",triangle(a,b));

    return 0;
}