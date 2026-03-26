#include<stdio.h>

// function def with parameter
void printTable(int n){
    for (int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", n,i,n*i);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printTable(n);      // fun arguments eg. printtable(5);
    return 0;
}