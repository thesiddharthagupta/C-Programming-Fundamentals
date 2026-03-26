//  about func:- 
// block of code which perform specific tasks.
// increase reusability


#include<stdio.h>
// declaration/prototype
void printHello();
void printBye();


int main(){
    //function call
    printHello();  
    printBye();  // functioncall2
    return 0;
}

// function defination
void printHello(){
    printf("Hello There!\n");
}

void printBye(){
    printf("bye!  ");
    printf("see you soon!\n");
}

