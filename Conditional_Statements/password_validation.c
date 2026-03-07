#include <stdio.h>
#include <string.h>

int main() {

    char usrname[50];
    char psd[50];

    char Correct_username[] = "Admin98760";  // using array
    char correct_password[] = "Pass1234";    // using array

    printf("Enter username: ");
    scanf("%s", usrname);

    printf("Enter password: ");
    scanf("%s", psd);

    // strcmp is used for compair the required string
    if (strcmp(Correct_username, usrname) == 0 && strcmp(correct_password, psd) == 0) {
        printf("You entered correct username or password\n");
    } 
    else {
        printf("You entered wrong username and password\n");
    }

    return 0;
}