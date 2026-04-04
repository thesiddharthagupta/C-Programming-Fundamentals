#include<stdio.h>

void area(float r){
    float a = 3.14 * r * r;
    printf("Area = %.2f\n", a);
}

int main(){
    float radius;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area(radius);

    return 0;
}