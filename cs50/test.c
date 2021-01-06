#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n, i, j;
    do
    {
        n = get_int("Height :");
    } while (n < 1);

    for (i = 1; i <= n; i++)
    {
        /* Print spaces spaces in row */
        for (j = i; j < n; j++)
        {
            printf(".");
        }

        /* Print star in row */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        /* Print new line */
        printf("\n");
    }
}
