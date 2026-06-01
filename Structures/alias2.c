#include<stdio.h>
typedef struct Bankaccount
{
    int accountno;
    char name[100];

} acc;

int main(){
    acc acc1 = { 123, "sidd"};
    // acc acc2 = { 124, "siddhu"};
    // acc acc3 = { 125, "sidd"};

    printf("acc no = %d\n", acc1.accountno);
    printf("NAME = %s\n", acc1.name);

    return 0;

}
