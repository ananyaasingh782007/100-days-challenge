#include <stdio.h>
int main(void){int n,i,sum=1;if(scanf("%d",&n)!=1)return 1;if(n<=1){puts("Not perfect number");return 0;}for(i=2;i<=n/i;i++)if(n%i==0){sum+=i;if(i!=n/i)sum+=n/i;}puts(sum==n?"Perfect number":"Not perfect number");return 0;}
