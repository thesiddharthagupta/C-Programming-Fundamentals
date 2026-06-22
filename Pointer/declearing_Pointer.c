#include<stdio.h>
int main()
{
int age = 22;
int *ptr = &age;    // pointing to age. & wer use pointer
int _age = *ptr;

printf("age is %d", *ptr);

}