#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to find power of any number x ^ y.
    double x, y;
    double res = 1;

    printf("Enter number\n");
    scanf("%lf", &x);
    printf("Enter power\n");
    scanf("%lf", &y);
    if(x == 0 && y ==0)
    {
        printf("MATH ERROR!\n");
    }
    else if(y != 0 )
    {
        for(double i = 1; i <= y; i++){
        res = res * x;
    }
    printf("%.2lf ^ %.2lf = %.2lf", x, y, res);
    }
    else
    {
        printf("%.2lf ^ %.2lf = %.2lf", x, y, res);
    }


    return 0;
}
