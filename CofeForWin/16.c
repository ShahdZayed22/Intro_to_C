#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to enter marks of five subjects and calculate total, average and percentage.
    float sub1, sub2, sub3, sub4, sub5;
    float total = 0;

    printf("Enter Mark of 1st subject: ");
    scanf("%f", &sub1);
    if (sub1 < 0 || sub1> 100)
    {
        printf("Please Enter a Mark within The Range (0 : 100)\n");
        printf("Enter Mark of 1st subject: ");
        scanf("%f", &sub1);
    }

    printf("Enter Mark of 2nd subject: ");
    scanf("%f", &sub2);
    if (sub2 < 0 || sub2 > 100)
    {
        printf("Please Enter a Mark within The Range (0 : 100)\n");
        printf("Enter Mark of 2nd subject: ");
        scanf("%f", &sub2);
    }

    printf("Enter Mark of 3rd subject: ");
    scanf("%f", &sub3);
    if (sub3 < 0 || sub3 > 100)
    {
        printf("Please Enter a Mark within The Range (0 : 100)\n");
        printf("Enter Mark of 3rd subject: ");
        scanf("%f", &sub3);
        printf("\n");
    }

    printf("Enter Mark of 4th subject: ");
    scanf("%f", &sub4);
    if (sub4 < 0 || sub4 > 100)
    {
        printf("Please Enter a Mark within The Range (0 : 100)\n");
        printf("Enter Mark of 4th subject: ");
        scanf("%f", &sub3);
    }

    printf("Enter Mark of 5th subject: ");
    scanf("%f", &sub5);
    if (sub5 < 0 || sub5 > 100)
    {
        printf("Please Enter a Mark within The Range (0 : 100)\n");
        printf("Enter Mark of 5th subject: ");
        scanf("%f", &sub5);
    }

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", total/5);
    printf("Percentage = %.2f %%\n", (total / 500)*100);

    // To test another way
    float marks[5];
    int x;

    printf("Click 1 to calculate another result");
    scanf("%d", &x);
    if (x == 1)
    {
        for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Enter Mark of subject %d: ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100)
            {
                printf("Please enter a mark within the range (0 - 100).\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);

        total += marks[i];
    }
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average = %.2f\n", total / 5);
    printf("Percentage = %.2f%%\n", (total / 500) * 100);
    }


    return 0;
}
