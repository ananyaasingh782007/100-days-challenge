#include <stdio.h>
int main(void){long long n,p=1,first,last,middle,result; if(scanf("%lld",&n)!=1)return 1; if(n<0){puts("Invalid number");return 0;}if(n<10){printf("%lld\n",n);return 0;}while(n/p>=10)p*=10;first=n/p;last=n%10;middle=(n%p)/10;result=last*p+middle*10+first;printf("%lld\n",result);return 0;}
