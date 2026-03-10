#include <stdio.h>   
#include <math.h>    // for sqrt() function

int main() {

    float a, b, c;
    float discriminant;
    float root1, root2;
    float realPart, imagPart;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // check if equation is quadratic or not
    if(a == 0){
        printf("Not a quadratic equation");
        return 0;
    }

    // calculate discriminant (b² - 4ac)
    discriminant = b*b - 4*a*c;

    // CASE 1: discriminant > 0 → two real and different roots
    if (discriminant > 0) {

        // formula: (-b ± √D) / 2a
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }

    // CASE 2: discriminant = 0 → two real and equal roots
    else if (discriminant == 0) {

        root1 = -b / (2*a);

        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }

    // CASE 3: discriminant < 0 → complex roots
    else {

        // real part of root
        realPart = -b / (2*a);

        // imaginary part of root
        imagPart = sqrt(-discriminant) / (2*a);

        printf("Roots are complex\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;   
}


/* Algorithm 
1. Input a, b, c

2. Calculate D = b² − 4ac

3. If D > 0 → real & distinct roots

4. If D = 0 → real & equal roots

5. If D < 0 → complex roots
*/