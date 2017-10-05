//SUM OR PORODUCT
#include<iostream>
using namespace std;

int main() {
	int ch,n;
	cin>>n;
	cin>>ch;
	int sum=0;
	long long pr=1;
	if(ch==1)
	{
	    for(int i=1;i<=n;i++)
	    {
	        sum=sum+i;
	        
	    }
	    cout<<sum;
	}
	else if(ch==2)
	{
	    for(int i=1;i<=n;i++)
	    {
	        pr=pr*i;
	    }
	    cout<<pr;
	}
	else
	{
	    cout<<"-1";
	}
	
}
