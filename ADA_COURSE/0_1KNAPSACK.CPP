#include <iostream>
using namespace std;
int MaxProfit(int *price,int* weight,int weight_bag,int n)
{
	int** arr=new int*[n+1];
	for(int i=0;i<n+1;i++) 
	{
		arr[i]=new int[weight_bag+1];
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<weight_bag+1;j++)
		{
			arr[i][j]=0;
		}
	}
	for(int i=1;i<n+1;i++)
	{
		
        
		for(int j=1;j<weight_bag+1;j++)
		{
			int exc=0;
        int inc=0;
			if(weight[i-1]<=j)
		    {
			inc=price[i-1]+arr[i-1][j-weight[i-1]];
		    }
		    exc=arr[i-1][j];
           arr[i][j]=max(inc,exc);
		}
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<weight_bag+1;j++)
		{
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
	return arr[n][weight_bag];
}
int main()
{
	int s;
	cin>>s;
	int n;
	cin>>n;
	int *weight=new int[n];
    int *price=new int[n];
	for(int i=0;i<n;i++)
	{
      cin>>weight[i];
      cin>>price[i];
	}
    cout<<endl<<MaxProfit(price,weight,s,n);
}