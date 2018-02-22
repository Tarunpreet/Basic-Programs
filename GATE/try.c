#include<stdio.h>
void main()
{
	char *s="hello";
	char *p="hello";
	if(s==p)
	{
	printf("same\n");
	}
	else
	{
	printf("diff\n");
	
	}
	char s1[10];
	scanf("%s",&s1);
	char s2[10];
	scanf("%s",&s2);
	printf("%s",s1);
	printf("%s",s2);
	if(s1==s2)
	{
	printf("same 1");
	}
	else
	{
	printf("diff\n");
	}

}