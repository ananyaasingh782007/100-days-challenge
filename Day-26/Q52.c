#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        int stars = (i <= 3) ? (2 * i - 1) : (2 * (6 - i) - 1);
        int spaces = (5 - stars) / 2;

        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

