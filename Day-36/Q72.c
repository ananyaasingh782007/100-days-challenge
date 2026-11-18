#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j, sum = 0;

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
            sum = sum + arr[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
