#include<iostream>
using namespace std;

int main() {
	long bin=0;
	long dec,rem,i=1;
	cin>>dec;
	while(dec!=0)
	{
	    rem=dec%2;
	    bin=bin+(rem*i);
	    dec=dec/2;
	    i=i*10;
	}
	cout<<bin;
}
