#include<stdio.h>
int a = 10;     //Global variable
void m();
int main(){
    m();        // highly preference to main 
    printf("%d",a);
    return 0;
}
void m(){
    a = 5;
    printf("%d",a);
}