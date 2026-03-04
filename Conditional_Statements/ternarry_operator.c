#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    (age>=18)? printf("You can Vote!") : printf("You Can't Vote!");
    return 0;
}