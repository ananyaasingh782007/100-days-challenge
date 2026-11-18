#include <stdio.h>

int main()
{
    int arr[100], n, i, element, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > element)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
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
