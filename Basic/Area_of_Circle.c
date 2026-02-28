#include<stdio.h>
int main(){
    // 3.14 * r*r = area of circle
    float pie = 3.14;   // use can directly assign value at print too.
    float radius;
    printf("Enter the radius: ");
    scanf("%f" ,&radius);

    printf("The Area of Circle is: %.2f", pie*radius*radius);    //%.2f prints two decimal place
    return 0;
}