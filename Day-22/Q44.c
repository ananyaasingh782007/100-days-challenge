#include <stdio.h>
int main(void){int n,i;double sum=1.0;if(scanf("%d",&n)!=1)return 1;if(n<=0){printf("Approximate sum: 0.0\n");return 0;}for(i=2;i<=n;i++)sum+=(2.0*i-1)/(2.0*i);printf("Approximate sum: %.1f\n",sum);return 0;}
