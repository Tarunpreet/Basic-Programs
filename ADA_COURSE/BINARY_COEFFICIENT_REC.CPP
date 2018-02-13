#include <iostream>
using namespace std;
int binary_coeff(int n,int k)
{
	if(k==n||k==0)
	{
		return 1;
	}
	if(k>n)
	{
		return 0;
	}
	if(k==1)
	{
		return n;
	}
	int ans;
	ans=binary_coeff(n-1,k-1)+binary_coeff(n-1,k);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	cout<<binary_coeff(n,k);
}