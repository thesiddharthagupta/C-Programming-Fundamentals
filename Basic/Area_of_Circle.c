#include<stdio.h>

int main(){
    float pie = 3.14;
    float radius, area, circumference;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = pie * radius * radius;
    circumference = 2 * pie * radius;

    printf("Area of Circle: %.2f", area);
    printf("\nCircumference of Circle: %.2f", circumference);

    return 0;
}