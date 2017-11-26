#include<iostream>
using namespace std;
int lcs(string str,string str1,int **arr)
{
	for(int i=1;i<str.length()+1;i++)
	{
		for(int j=1;j<str1.length()+1;j++)
		{
			if(str[i-1]==str1[j-1])
			{
				arr[i][j]=1+arr[i-1][j-1];
			}
			else
			{
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
			}
		}
	}
	for(int i=0;i<str.length()+1;i++)
	{
		for(int j=0;j<str1.length()+1;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return arr[str.length()][str1.length()];
}
int main()
{
	string str;
	string str1;
	cin>>str;
	cin>>str1;
	int **arr=new int*[str.length()+1];
for(int i=0;i<str.length()+1;i++) 
	{arr[i]=new int[str1.length()+1];}
	for(int i=0;i<str.length()+1;i++)
	{
		for(int j=0;j<str1.length()+1;j++)
		{
			arr[i][j]=0;
		}
	}
	int ans=lcs(str,str1,arr);
	cout<<endl<<ans;
}