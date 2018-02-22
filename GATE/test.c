#include<stdio.h>
int main ()
{
int a=2;
int b,c;
a*=b=c=4;
a=b=c;
printf("%d",a);
a==(b=c);
printf("%d",a);
return 0;
}