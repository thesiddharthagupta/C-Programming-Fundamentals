#include<stdio.h>

float areaRectangle(int a,int b){
    return a * b;
}

float areaSquare(int a){
    return a * a;
}

float areaCube(int a){
    return a * a * a;
}

int main(){
    int a,b;

    a = 5;
    b = 10;

    printf("Area of rectangle is:%f\n", areaRectangle(a,b));
    printf("Area of square is:%f\n ", areaSquare(a));
    printf("Area of cube is:%f\n", areaCube(a));

    return 0;
}