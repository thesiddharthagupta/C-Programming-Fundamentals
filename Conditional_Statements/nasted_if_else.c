#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if (num>=0){
        printf("Positive\n");

        if (num%2==0)
        {
            printf("Even\n");
        } 
        else 
        {
            printf("Odd\n");
        }
    }  
    else if (num == 0)
    {
        printf("Zero\n");
    }
    else
      {
        printf("Negative\n");
    }
    return 0;
}