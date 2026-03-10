#include<stdio.h>
int main(){
    int area,length,breadth,perimeter;
    printf("ENter Length and Breadth: ");
    scanf("%d%d",&length,&breadth);
    
    area = length + breadth;
    perimeter = 2*(length + breadth);

    printf("Area of Rectangle: %d\n",area);

    printf("Perimeter of Rectangle: %d\n",perimeter);

    return 0;
}