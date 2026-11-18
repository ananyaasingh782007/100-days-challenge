#include <stdio.h>

int main()
{
    int arr[10][10], sum[10];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        return 0;
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        printf("%d", sum[i]);

        if (i < rows - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
