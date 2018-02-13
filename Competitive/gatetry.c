#include<stdio.h>


int calc(int a,int b,static counter)
{
	int c;
	counter++;
	if(b==3)
	{
		printf("%d\n",counter );
		return(a*a*a);
		
	}
	else
	{
		c=calc(a,b/3,counter);
		printf("%d\n",counter );
		return(c*c*c);

	}

}
int main()
{
	static  counter=0;
	calc(4,81,counter);
    printf("%d\n",counter );
    return 0;
}