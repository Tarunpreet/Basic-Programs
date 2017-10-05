#include<iostream>

using namespace std;
int main()
{

int array[2][4];
for(int i=0;i<2;i++)
{
	for(int j=0;j<4;j++)
	{
		cin>>array[i][j];
		
	}
	
}
for(int j=0;j<4;j++)
{
	if(j%2==0)
	{
		for(int i=0;i<2;i++)
		{
			cout<<array[i][j];
		}
	}
	else
	{
		for(int i=1;i>=0;i--)
		{
		cout<<array[i][j];
	    }
	}
	
}
return 0;
}