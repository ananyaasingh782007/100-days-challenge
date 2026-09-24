#include <stdio.h>

int main()
{
    int num, reverse = 0, digit;

    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("%d\n", reverse);

    return 0;
}
