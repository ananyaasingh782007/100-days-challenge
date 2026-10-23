#include <stdio.h>

int main()
{
    int num, temp, digit, count = 0;
    int sum = 0, power, i;

    scanf("%d", &num);

    if (num < 0)
    {
        printf("Not Armstrong\n");
        return 0;
    }

    temp = num;

    do
    {
        count++;
        temp = temp / 10;
    } while (temp != 0);

    temp = num;

    do
    {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;

    } while (temp != 0);

    if (sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
