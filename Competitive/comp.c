#include<stdio.h>
int main()
{
	
	int test;
	scanf("%d",&test);
	
	while(test--)
	{
		int arr[1200];
		int k=0;
	    int n=0;
	    int p=0;
		scanf("%d",&n);
		scanf("%d",&k);
		scanf("%d",&p);
	    int i=0;
	    for(i=0;i<n;i++)
	   {
		arr[i]=i+1;
	    }
	   while(k--)
	    {
		int x=0;
       scanf("%d",&x);
       if(x>0)
       {
       arr[x-1]=0;
	    }
	   }
	   int num=1;
	   for(i=0;i<n;i++)
	   {
		  if(arr[i]!=0)
		 {
            if(num==p)
            {
            	printf("%d",arr[i]);
            	break;
            }
            else
            {
            	num++;
            }
		  }
	    }
	    if(i==n)
	    {
	    	printf("%d",-1);
	    }
	}
}