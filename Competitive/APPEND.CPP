#include<iostream>
using namespace std;
int main()
{
	long long int number;
	long long int num,num1;
	cin>>number;
	cin>>num;
	num1=number;
	int product=0;
	int sum=0;
	int rem=0;
	while(num1!=0)
	{
      rem=num1%10;
      product=rem*num;
      sum=sum+product;
      num1=num1/10;
	}
	rem=0;
	int sum1=0;
	while(sum!=0)
	{
		rem=sum%10;
        sum1=sum1+rem;
        sum=sum/10;
	}
	cout<<endl<<"answer: "<<sum1<<"  ";
	return 0;
}