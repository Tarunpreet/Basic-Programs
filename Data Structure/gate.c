#include<stdio.h>
int main()
{
char ch1[5]="GATE";
char *p=ch1;
while(*p++)
{
printf("%c",*p);
}
return 0;
}
