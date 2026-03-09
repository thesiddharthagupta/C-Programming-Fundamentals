#include<stdio.h>
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int i = 1;
    while(i<=num){
        if(i%2 == 0)
        {
            printf("%d is Even\n",i);
        }  else {
            printf("%d is Odd\n",i);
        }
        i++;
    }
    return 0;
}


