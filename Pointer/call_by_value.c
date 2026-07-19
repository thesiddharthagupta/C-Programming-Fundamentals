#include<stdio.h>
void square(int n){
    n = n*n;
    printf("Square is: %d\n", n);
}

int main(){
    int number = 4;
    // call by value means it create copy of value.  
    square (number);
    printf("n is:%d\n", number);

}

//like a msg which is sended and received what ever does its doesnt effect to main msg.