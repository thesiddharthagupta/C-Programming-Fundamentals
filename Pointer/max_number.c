#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = 30;

    int *x = &a;
    int *y = &b;
    int *z = &c;

    if (*x > *y && *x > *z){
        printf("Greater is %d\n", *x);
    } else if (*y > *x && *y > *z){
        printf("Greater is %d\n", *y);
    } else if (*z > *y && *x < *z){     //if pointer of z is greater.
        printf("Greater is %d", *z);
    } else {
        printf("Invalid number!");
    }
    return 0;

}

// &variable  → gives address
//*pointer   → gives value at address