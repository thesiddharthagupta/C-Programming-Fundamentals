#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, realPart, imagPart, root1, root2;

    printf("Enter a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}