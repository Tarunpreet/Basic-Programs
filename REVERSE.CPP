#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	int num,rev=0,temp,rem;
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==num)
	{
		cout<<" PALINDROME.  ";

	}
	else
	{
		cout<<"Not a PALINDROME." ;
	}
	/* code */
	return 0;
}