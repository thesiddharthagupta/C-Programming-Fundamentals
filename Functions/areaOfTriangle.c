#include<stdio.h>

int areaOfTriangle(int l, int b){
    return 1*(l*b)/2;
}

int main(){
    int l,b;
    printf("Enter value of length and breadth: ");
    scanf("%d%d",&l,&b);

    printf("Area of Triangle is %d", areaOfTriangle(l,b));

    return 0;
}