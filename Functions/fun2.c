
#include<stdio.h>
// declaration/prototype
void namaste(){
    printf("Nameste!\n");
}
void bonjour(){
    printf("Bonjour!");
}


int main(){
    //function call
    char ch;
    printf("Enter f for french & n for nepali: ");
    scanf("%c",&ch);

    if ((ch =='f') || (ch == 'F')){
        bonjour();

    } else if ((ch == 'n') || (ch == 'N')) {
        namaste();
    }
    else{
        printf("Please choose the language ('f' or 'n')");
    }
    
    return 0;
}


