#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], temp;
    int i, start = 0, end, length;

    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    for (i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
