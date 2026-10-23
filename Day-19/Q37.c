#include <stdio.h>
int main(void) {
    long long a,b,x,y,t;
    if (scanf("%lld %lld",&a,&b)!=2) return 1;
    if(a==0 || b==0){puts("0");return 0;}
    x=a<0?-a:a; y=b<0?-b:b;
    while(y){t=x%y;x=y;y=t;}
    long long l=(a/x)*b;
    printf("%lld\n",l<0?-l:l);
    return 0;
}
