#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b){

        if (a == b && b == c){
            printf("The Triangle is Equilateral.");
        }
        else if (a == b || b == c || c == a){
            printf("The Triangle is Isosceles.");
        }
        else{
            printf("The Triangle is Scalene.");
        }
    } 
    else{
        printf("Not a Valid Triangle.");
    }
    return 0;
}