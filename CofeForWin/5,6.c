#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Write a C program to enter radius of a circle and find its diameter, circumference and area.
    float radius;

    printf("Enter Radius Of Circle\n");
    scanf("%f", &radius);

    printf("Diameter Of Circle = %.2f\n", 2 * radius);
    printf("Circumference Of Circle = %.2f\n", 2 * M_PI * radius);
    printf("Area Of Circle = %.2f\n", M_PI * pow(radius, 2));
    return 0;
}
