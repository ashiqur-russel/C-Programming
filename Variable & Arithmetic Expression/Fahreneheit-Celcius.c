#include <stdio.h>
int main()
{
    int fahr, celcius, lower, upper, step;

    lower = 0;   /* lower limit of temp table*/
    upper = 300; /* upper limit */

    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;

        printf("%d \t %d \n", fahr, celcius);
        fahr += step;
    }

    printf("\n ");
}