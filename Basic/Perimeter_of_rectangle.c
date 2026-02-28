/*  Write a program to calculate perimeter of rectangle.
    Take sides, a & b, from the user.
*/
 
#include<stdio.h>
int main(){
float a,b;
printf("Enter the value of a: ");
scanf ("%f", &a);
printf("Enter the value of b: ");
scanf("%f",&b);

// printf("Perimeter of rectangle is: %f ", 2 * (a + b));
printf("Perimeter of Rectangle is: %.2f ", 2 * (a + b));  // %.2f is used for print 2 decimal place.
return 0;

}