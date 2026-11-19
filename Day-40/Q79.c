#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j, d;

    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        return 0;
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (d = 0; d < rows + cols - 1; d++)
    {
        if (d % 2 == 0)
        {
            for (i = rows - 1; i >= 0; i--)
            {
                j = d - i;

                if (j >= 0 && j < cols)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else
        {
            for (i = 0; i < rows; i++)
            {
                j = d - i;

                if (j >= 0 && j < cols)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    printf("\n");

    return 0;
}
