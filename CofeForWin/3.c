#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to enter two numbers and perform all arithmetic operations.

    float num1, num2;

    printf("Enter First Number\n");
    scanf("%f", &num1);
    printf("Enter Second Number\n");
    scanf("%f", &num2);

    printf("Number 1 + Number 2 = %.2f\n", num1 + num2);
    printf("Number 1 - Number 2 = %.2f\n", num1 - num2);
    printf("Number 1 * Number 2 = %.2f\n", num1 * num2);
    if (num2 != 0)
    {
        printf("Number 1 / Number 2 = %.2f\n", num1 / num2);
        printf("Remainder of division = %d\n", (int)num1 % (int)num2);
    }
    else
    {
        printf("Cannot divide by 0\n");
    }


    return 0;
}
