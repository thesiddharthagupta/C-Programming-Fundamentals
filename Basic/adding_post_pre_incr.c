#include<stdio.h>
int main(){
    int a = 4, b = 3;
    printf("%d",a++ + ++b);     // 4 + 4 = 8
    printf("%d%d",a,b);         // 5_9
    return 0;
}