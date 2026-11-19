#include <stdio.h>

int main()
{
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            if (name[i] >= 'a' && name[i] <= 'z')
            {
                printf("%c.", name[i] - 32);
            }
            else if (name[i] >= 'A' && name[i] <= 'Z')
            {
                printf("%c.", name[i]);
            }
        }
    }

    printf("\n");

    return 0;
}
