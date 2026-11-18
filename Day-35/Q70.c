#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, temp;

    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = ((k % n) + n) % n;

    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
