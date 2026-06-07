#include<stdio.h>
int main(){
    // int num;
    // printf("Enter a number: ");
    // scanf("%d",&num);

    for (int i=1; i<=20; i++){
        if (i==8){          // terminate itteration at .8
            break;
        } else if (i==3){   // skips 3 on iteration
            continue;
        }
        printf("%d",i);
    }
    return 0;
}