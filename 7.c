#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to enter length in centimeter and convert it into meter and kilometer.

    double length;

    printf("Enter length in centimeters\n");
    scanf("%lf", &length);

    printf("Length = %.3lf meters\n", (length/100));
    printf("Length = %.3lf kilometers\n", (length/1000));
    return 0;
}
