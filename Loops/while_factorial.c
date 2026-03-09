#include<stdio.h>
int main(){
    int n,fact = 1;

    printf("ENter number: ");
    scanf("%d",&n);

    int i = 1;
    while(i<=n){
        fact *= i;
        printf("factorial are %d: ",fact);
        i++ ;
    }
    return 0;
}

/*

initialize;

while(condition)
{
    work;
    update;
}
    
*/