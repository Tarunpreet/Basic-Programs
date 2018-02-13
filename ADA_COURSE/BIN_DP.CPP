#include<iostream>
using namespace std;
int binary_coeff(int n,int k)
{
	int** arr=new int*[n+1];
	for(int i=0;i<n+1;i++)
	{
		arr[i]=new int[k+1];
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0||j==n)
			{
				arr[i][j]=1;
			}
			else if(j==1)
			{
				arr[i][j]=i;
			}
			else
			{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			}

		}
	}
	return arr[n][k];
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	cout<<binary_coeff(n,k);
}