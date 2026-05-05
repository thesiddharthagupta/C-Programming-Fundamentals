#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u, %u difference = %u\n", ptr,_ptr,ptr -_ptr);
    // difference is 1 int data type = 4 bytes.
    
    _ptr = &age;
    printf("Comparision = %u\n", ptr == _ptr);
    // output 1 because its true (datatype)
    return 0;
}