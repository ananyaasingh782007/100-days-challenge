#include <stdio.h>

int main()
{
    int arr[10][10], transpose[10][10];
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
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d", transpose[i][j]);

            if (j < rows - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
