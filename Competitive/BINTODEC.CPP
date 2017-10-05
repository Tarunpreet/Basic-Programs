#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int bin,bin1;
	int dec=0,count=0,rem;
	cin>>bin;
	bin1=bin;
	while(bin1!=0)
	{
	    bin1=bin1/10;
	    count=count+1;
	}
	for(int i=0;i<count;i++)
	{
	    rem=bin%10;
	  
	    bin=bin/10;
	    dec=dec+(pow(2,i)*rem);
	    
	}
	cout<<dec;
	
}
