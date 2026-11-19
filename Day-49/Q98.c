#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last = 0, start = 1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
    }

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] != ' ' &&
            (i == 0 || name[i - 1] == ' '))
        {
            last = i;
        }
    }

    for (i = 0; i < last; i++)
    {
        if (name[i] != ' ' && start == 1)
        {
            if (name[i] >= 'a' && name[i] <= 'z')
                printf("%c.", name[i] - 32);
            else
                printf("%c.", name[i]);

            start = 0;
        }

        if (name[i] == ' ')
            start = 1;
    }

    printf("%s\n", name + last);

    return 0;
}
