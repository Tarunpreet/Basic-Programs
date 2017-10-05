#include<iostream>
using namespace std;

int main() {
	char input;
	cin>>input;
	if(input>='a'&&input<='z')
	{
	    cout<<"0";
	}
	else if(input>='A'&&input<='Z')
	{
	    cout<<"1";
	}
	else
	{
	    cout<<"-1";
	}
	return 0;
}