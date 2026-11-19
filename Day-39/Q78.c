#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, sum = 0;

    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
