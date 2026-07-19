#include<stdio.h>
int main() {

// AND "&&" operator
printf("%d \n", 3<4 && 3<5);  //-> True (1)
printf("%d \n", 3<4 && 5<4);  //-> False (0)

// OR "||" operator
printf("%d \n", 3<4 || 5<4);    //-> True (1)
printf("%d \n", 3>4 || 5>4);    //-> True (1)
printf("%d \n", 3<4 || 3<5);    //-> True (1)

//Not "!" operator
printf("%d \n", !(3<4 && 3<5));     //-> False (0)
printf("%d \n", !(4<3 || 5<3));     //-> True

return 0;
}

