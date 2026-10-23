#include <stdio.h>
int main(void){int n,i;double sum=0;if(scanf("%d",&n)!=1)return 1;for(i=1;i<=n;i++)sum+=(2.0*i)/(4.0*i-1);printf("Approximate sum: %.2f\n",sum);return 0;}
