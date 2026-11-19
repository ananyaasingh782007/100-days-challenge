#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i = 0, found = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';

            if (freq[index] == 1)
            {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }

            freq[index]++;
        }

        i++;
    }

    if (found == 0)
    {
        printf("No repeating character\n");
    }

    return 0;
}
