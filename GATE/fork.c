#include<stdio.h>
#include  <sys/types.h>
int main()
{
	int fork1,new;
	fork1=fork();
	scanf("%d",&new);
	if(fork1<0)
	{
		printf("Unsucessfull\n");
	}
	if(fork1==0)
	{
		printf("child\n");
	}
	if(fork1>0)
	{
		printf("parent");
		printf("%d - child id\n",fork1);
	}
	return 0;
}
//output
//parent
//child