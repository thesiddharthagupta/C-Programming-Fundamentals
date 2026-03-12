#include<stdio.h>
int main(){
    int i = 1;
    while(i <= 10){
        if (i % 2 == 0){
            i++;        // increment before continue
            continue;
        }
        printf("%d ", i);
        i++;            // increment for odd case
    }
    return 0;
}