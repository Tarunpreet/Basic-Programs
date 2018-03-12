#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int test=0;
	cin>>test;
	while(test--)
	{
		long long int n;
		long double hours=0.0;
		long double temp=0.0;
		cin>>n;
	    long long int *arr=new long long int[n];
	   cin>>temp;
	    hours=hours+temp;
	    scanf("%lld",&arr[0]);
	    long long int high=arr[0];
	    for(long long int i=1;i<n;i++)
	    {
           scanf("%lld",&arr[i]);
           if(arr[i]>high)
           {
           	high=arr[i];
           }
	    }
	    if(n==hours)
	    {
          printf("\n%lld",high);
	    }
	    else
	    {
	    long double total=0.0;
	    for(long long int i=0;i<n;i++)
	     {
           total=total+ceil((hours/arr[i]));
 
	     }
	     cout<<endl<<total;
	}
}
	return 0;
}