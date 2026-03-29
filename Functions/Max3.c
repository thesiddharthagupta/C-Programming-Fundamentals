#include<stdio.h>

int max3(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    int result = max3(a,b,c);

    printf("Greater among %d, %d and %d is: %d", a,b,c , result);

    return 0;
}
