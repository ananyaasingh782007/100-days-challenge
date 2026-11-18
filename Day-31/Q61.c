#include <stdio.h>

int main()
{
    int n, i, arr[100], key;
    int position = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("Element found at index %d\n", position);
    else
        printf("Element not found\n");

    return 0;
}
