#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, symmetric = 1;

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
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
        {
            break;
        }
    }

    if (symmetric == 1)
    {
        printf("Symmetric\n");
    }
    else
    {
        printf("Not Symmetric\n");
    }

    return 0;
}
