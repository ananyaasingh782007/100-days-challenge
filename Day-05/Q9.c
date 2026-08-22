#include <stdio.h>
#include <math.h>
int main()
{
float principal, rate, time;
float simple_intrest,
compound_intrest;
scanf("%f %f %f", &principal, &rate, &time);
simple_intrest = (principal * rate * time) / 100;
compound_intrest = principal * pow(1 + rate / 100, time)  - principal;
printf("Simple Intresting=%g, Compound Intrest=%g\n",
simple_intrest, compound_intrest);
return 0;
}
