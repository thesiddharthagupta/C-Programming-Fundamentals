#include<stdio.h>

int main(){
    char day;

    printf("Enter day (S,M,T,W,H,F,A): ");
    scanf("%s",&day);   // %s is used for multiple char; where as %s for single; 

    switch(day)
    {
        case 'S': printf("Sunday");     
        break;
        case 'M': printf("Monday");     break;
        case 'T': printf("Tuesday");    break;
        case 'W': printf("Wednesday");  break;
        case 'H': printf("Thursday");   break;
        case 'F': printf("Friday");     break;
        case 'A': printf("Saturday");   break;

        default: printf("Not a valid day!");
    }

    return 0;
}