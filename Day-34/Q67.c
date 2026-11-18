#include <stdio.h>

int main()
{
    int arr[100], n, i, element, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &element, &pos);

    if (n < 0 || n >= 100 || pos < 1 || pos > n + 1)
    {
        printf("Invalid position\n");
        return 0;
    }

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
