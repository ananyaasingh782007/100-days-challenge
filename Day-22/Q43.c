#include <stdio.h>
int main(void){int n,temp,d,i,f,sum=0;if(scanf("%d",&n)!=1)return 1;if(n<0){puts("Not strong number");return 0;}temp=n;do{d=temp%10;f=1;for(i=2;i<=d;i++)f*=i;sum+=f;temp/=10;}while(temp);puts(sum==n?"Strong number":"Not strong number");return 0;}
