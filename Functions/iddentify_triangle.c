#include<stdio.h>

int scalar(int a, int b){
    return a * b;
}

int isValidTriangle(int a, int b, int c){
    return (a + b > c) && (b + c > a) && (a + c > b);
}

void identifyTriangle(int a, int b, int c){
    if(!isValidTriangle(a, b, c)){
        printf("Not a valid triangle!\n");
        return;
    }

    printf("Valid Triangle! Type: ");

    // Identify by sides
    if(a == b && b == c){
        printf("Equilateral Triangle (all sides equal)\n");
    } else if(a == b || b == c || a == c){
        printf("Isosceles Triangle (two sides equal)\n");
    } else {
        printf("Scalene Triangle (no sides equal)\n");
    }

    // Identify by angles using Pythagorean theorem
    int sides[3] = {a, b, c};
    // Sort to get the largest side
    int temp;
    for(int i = 0; i < 2; i++)
        for(int j = i+1; j < 3; j++)
            if(sides[i] > sides[j]){
                temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }

    int a2 = scalar(sides[0], sides[0]);
    int b2 = scalar(sides[1], sides[1]);
    int c2 = scalar(sides[2], sides[2]);

    if(a2 + b2 == c2){
        printf("Angle Type  : Right Triangle (90 degree angle)\n");
    } else if(a2 + b2 > c2){
        printf("Angle Type  : Acute Triangle (all angles < 90)\n");
    } else {
        printf("Angle Type  : Obtuse Triangle (one angle > 90)\n");
    }
}

int main(){
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    identifyTriangle(a, b, c);
    return 0;
}