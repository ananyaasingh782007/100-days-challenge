#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, n;

    fgets(str, sizeof(str), stdin);

    n = strlen(str);

    if (n > 0 && str[n - 1] == '\n')
    {
        str[n - 1] = '\0';
        n--;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
