#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to convert days into years, weeks and days.

    int days_num, years, weeks, days;

    printf("Enter Number Of Days\n");
    scanf("%d", &days_num);

    years = days_num / 365;
    weeks = (days_num % 365) / 7;
    days = days_num - (365*years + 7*weeks);

    printf("%d years, %d weeks and %d days\n", years, weeks, days);
    return 0;
}
