#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

    int temp;

    printf("Enter Temperature In Celsius\n");
    scanf("%d", &temp);

    printf("Temperature = %d Fahrenheit\n", (temp * 9/5) + 32);
    return 0;
}
