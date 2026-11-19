#include <stdio.h>

int main()
{
    char str[200], longest[200];
    int i = 0, start = 0;
    int length = 0, maxLength = 0, j;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' ||
            str[i] == '\0')
        {
            if (length > maxLength)
            {
                maxLength = length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            length = 0;
            start = i + 1;
        }
        else
        {
            length++;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    if (maxLength > 0)
        printf("%s\n", longest);

    return 0;
}
