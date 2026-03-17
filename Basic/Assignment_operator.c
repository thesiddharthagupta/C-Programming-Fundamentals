#include<stdio.h>
int main() {
int a = 10;
a += 10;

printf("a+10 = %d \n", a);
a-= 10;

printf("a-10 = %d \n", a);
a *= 10;

printf("a*10 = %d \n", a);
a /= 10;

printf("a/10 = %d \n", a);
a %= 10;

printf("a%c10 = %d \n", '%', a);

return 0;
}


/*
//Write a program to demonstrate the use of compound assignment operators (+=, -=, *=, /=, %=).

#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
 
    printf("\nthe value is:%d", a+=b);
   
    printf("\nthe value is:%d", a-+b);
   
    printf("\nthe value is:%d", a*=b);

    printf("\nthe value is:%d", a/=b);

    printf("\nthe value is:%d", a%=b);

    return 0;

}
*/