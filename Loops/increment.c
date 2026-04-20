#include<stdio.h>
int main(){
    int x;
    for(x = 1; x <= 20; x++);   // it will not be execute body part bcox of  ";"
    printf("%d\n",x);
    x++;
}       // output : 21