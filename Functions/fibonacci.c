#include<stdio.h>
int fibo(int n){
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else {
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for (int i=1; i <=n; i++){
        printf("%d\t",fibo(i));

    }
    return 0;
}