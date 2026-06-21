#include<stdio.h>
int main()
{
int age = 22;
int *ptr = &age;    // pointing to age
int _age = *ptr;

printf("age is %d", *ptr);

}