
#include<stdio.h>
// declaration/prototype
void namaste(){
    printf("Nameste!\n");   //func defined
}
void bonjour(){
    printf("Bonjour!");     // func defined
}


int main(){
    //function call
    char ch;
    printf("Enter f for french & n for nepali: ");
    scanf("%c",&ch);

    if ((ch =='f') || (ch == 'F')){
        bonjour();

    } else if ((ch == 'n') || (ch == 'N')) {
        namaste();  //func call
    }
    else{
        printf("Please choose the language ('f' or 'n')");
    }
    
    return 0;
}


