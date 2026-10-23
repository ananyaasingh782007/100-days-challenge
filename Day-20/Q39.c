#include <stdio.h>
int main(void){long long n,product=1,d; if(scanf("%lld",&n)!=1)return 1; if(n<0)n=-n;while(n){d=n%10;if(d%2)product*=d;n/=10;}printf("%lld\n",product);return 0;}
