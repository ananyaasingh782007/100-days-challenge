#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int largest, second;
    int found = 0;

    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Second largest not found\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = INT_MIN;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
            found = 1;
        }
        else if (arr[i] < largest &&
                 (!found || arr[i] > second))
        {
            second = arr[i];
            found = 1;
        }
    }

    if (found)
        printf("%d\n", second);
    else
        printf("Second largest not found\n");

    return 0;
}
