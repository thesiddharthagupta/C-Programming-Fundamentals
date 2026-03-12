#include <stdio.h>

int main()
{
    int X = 5, Y = 6;
    int x1 = 2, x2 = 8, y1 = 3, y4 = 7;

    if (X >= x1 && X <= x2 && Y >= y1 && Y <= y4)   // && means True + True = T else False
        printf("INSIDE");
    else
        printf("OUTSIDE");

    return 0;
}