#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int i, low, high, mid, pos = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
