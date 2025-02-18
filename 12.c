#include <stdio.h>
#include <stdlib.h>


int main()
{
    // Write a C program to enter any number and calculate its square root.
    double num;

    printf("Enter Number\n");
    scanf("%lf", &num);

    printf("Square Root of %.2lf = %.2lf\n", num, sqrt(num));
    return 0;
}
