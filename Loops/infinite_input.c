#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter Number (0 to Stop):\n");
    
    while (1)
    {   
        scanf("%d",&num);
        if (num == 0){
            break;
        }
            count++;    //increase count
        } 
            printf("Attemps are: %d\n",count);
            return 0;
        }
    