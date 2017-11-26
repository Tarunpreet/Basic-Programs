#include<iostream>
using namespace std;
int lcs(string str,string str1,int **arr)
{
	if(str.length()==0||str1.length()==0)
	{
		return 0;
	}
	if(arr[str.length()][str1.length()]>-1)
	{
		return arr[str.length()][str1.length()];
	}
	int ans;
	if(str[0]==str1[0])
	{
		ans=1+lcs(str.substr(1),str1.substr(1),arr);
	}
	else
	{
	int option=lcs(str,str1.substr(1),arr);
	int option1=lcs(str.substr(1),str1,arr);
	ans=max(option1,option);
    }
    arr[str.length()][str1.length()]=ans;
	return ans;
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
			arr[i][j]=-1;
		}
	}
	int ans=lcs(str,str1,arr);
	cout<<endl<<ans;
}