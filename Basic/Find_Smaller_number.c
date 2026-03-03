#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter values of A,B and C: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a<b && a<c){
        printf("%d is the Smaller number.", a);
    }
    else if (b<a && b<c)
    {
        printf("%d is smaller number.", b);
    }
    else{
        printf("%d is the smaller number.", c);
    }
return 0;
}