#include <stdio.h>

int main()
{
float radius, area, circumference;
scanf("%f", &radius);
area = 3.14 * radius * radius;
circumference = 2 * 3.14 * radius;
printf("Area=%.2f, circumference=%.2f\n", area, circumference);

return 0;
}
