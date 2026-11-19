#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, distinct = 1;

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
        for (j = i + 1; j < n; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
        {
            break;
        }
    }

    if (distinct == 1)
    {
        printf("Distinct\n");
    }
    else
    {
        printf("Not Distinct\n");
    }

    return 0;
}
