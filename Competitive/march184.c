
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
	int test=0;
	scanf("%d",&test);
	while(test--)
	{
		long long int n;
		long double hours=0.0;
		long double temp;
		scanf("%lld",&n);
	    long long int *arr=(long long int *)malloc(n*sizeof(long long int));
	    scanf("%Lf",&temp);
	    hours=hours+temp;
	    scanf("%lld",&arr[0]);
	    long long int high=arr[0];
	    long long int arrtotal=0;
	    for(long long int i=1;i<n;i++)
	    {
           scanf("%lld",&arr[i]);
           if(arr[i]>high)
           {
           	high=arr[i];
           }
           arrtotal=arrtotal+arr[i];
           
	    }
	    if(n==hours)
	    {
          printf("\n%lld",high);
	    }
	    else
	    {
	    long double total=0.0,j=0.0;
	    long long int ans=0;
	    for(j=ceil(arrtotal/hours);j<high;j=j+1.00)
	    {
	    	total=0.0;
	     for(long long int i=0;i<n;i++)
	     {
           total=total+ceil((arr[i]/j));
 
	     }
	    
	     if(total==hours||total<hours)
	     {
	     	ans=j;
	     	break;
	     }
	    }
	    printf("\n%lld",ans);
	}
	    
	     
	    
	}
	return 0;
}