#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to enter length and breadth of a rectangle and find its perimeter.

    float length, width;

    printf(" Enter length and width of the rectangle:\n");
    scanf("%f %f", &length, &width);

    printf("Rectangle Perimeter = %.2f", 2 * (length + width));

    // Write a C program to enter length and breadth of a rectangle and find its area.

    printf("Rectangle Area = %.2f", length * width);
    return 0;
}

