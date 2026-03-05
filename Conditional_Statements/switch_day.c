#include<stdio.h>
int main(){
    int day; // 1- sun; 2- mon; carry on
    printf("Enter day (1-7): ");
    scanf("%d",&day);  

    switch (day) 
    {
    case 1: printf("Sunday"); // switch 'S' : printf("sunday");
        break;
    case 2: printf("Monday");  // switch case-> '2'
        break;
    case 3: printf("Tuesday");  // switch case-> '3'
        break;
    case 4: printf("Wednesday");
        break;
    case 5: printf("Thusday");
        break;
    case 6: printf("Friday");
        break;
    case 7: printf("Satuday");
        break;
    default: printf("Not a valid day!");
        
    }
    return 0;

}