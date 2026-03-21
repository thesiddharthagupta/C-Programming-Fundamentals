#include<stdio.h>
int main(){
    int num;
    int count = 0;
    int square;
    int i;

    do{
    printf("Enter number for square. (0 for stop): ");
    scanf("%d",&num);

        if(num != 0){
            square = num*num;
        printf("%d\n",square);
        count++;
        }
    }
    while(num != 0);
    printf("total number entered %d\n",count);
        
    return 0;
}