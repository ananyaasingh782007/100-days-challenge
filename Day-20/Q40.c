#include <stdio.h>
int main(void){int c,seen=0;while((c=getchar())!=EOF && c!='\n' && c!=' ' && c!='\t'){if(c=='0')putchar('1');else if(c=='1')putchar('0');else {puts("Invalid binary number");return 1;}seen=1;}if(seen)putchar('\n');return 0;}
