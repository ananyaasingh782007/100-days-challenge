#include <stdio.h>
int main()
{
float cost_price, selling_price, percentage;
scanf("%f %f", &cost_price, &selling_price);
if (selling_price > cost_price)
{
percentage = ((selling_price - cost_price) / cost_price) * 100;
printf("Profit %g%%\n", percentage);
}
else if (cost_price > selling_price)
{
percentage = ((cost_price - selling_price) / cost_price) * 100;
printf("Loss %g%%\n", percentage);
}
else
{
printf("No profit no loss\n");
}
return 0;
}
