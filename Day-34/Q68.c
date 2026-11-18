#include <stdio.h>

int main()
{
    int arr[100], n, i, element, pos = -1;

    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        for (i = 0; i < n; i++)
        {
            printf("%d", arr[i]);

            if (i < n - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
