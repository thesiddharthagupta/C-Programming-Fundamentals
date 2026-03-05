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


// #include<stdio.h>
// #include<math.h>
// int main() {
// char day = 'f';
// switch(day) {
// case 'm' : printf("monday \n");
// break;
// case 't' : printf("tuesday \n");
// break;
// case 'w' : printf("wednesday \n");
// break;
// case 'T' : printf("thursday \n");
// break;
// case 'f' : printf("friday \n");
// break;
// case 's' : printf("saturday \n");
// break;
// case 'S' : printf("sunday \n");
// break;
// }
// return 0; 
// }