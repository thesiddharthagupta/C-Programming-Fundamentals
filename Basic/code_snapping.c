#include<stdio.h>
 int a = 10;
void m(){
        int a = 5;
        a++;
        printf("%d",a);
    }
 int main(){
    m();
    printf("%d",a);
    return 0;
    }
    
 