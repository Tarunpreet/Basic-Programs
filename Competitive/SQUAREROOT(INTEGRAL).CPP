#include<iostream>
using namespace std;

int main() {
    
	long num;
	long  sqr;
	cin>>num;
	if(num==0||num==1)
	{
	    sqr=num;
	    cout<<sqr;
	}
	else
	{
	for(int i=1;i<num/2;i++)
    {
        if(i*i<=num)
        {
            sqr=i;
        }
        else
        {
            cout<<sqr;
            return 0;
        }
        
    }	
	}
	
}