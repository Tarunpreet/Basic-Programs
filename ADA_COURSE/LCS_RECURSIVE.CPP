//O(2^n)
#include<iostream>
using namespace std;
int lcs(string str,string str1)
{
	if(str.length()==0||str1.length()==0)
	{
		return 0;
	}
	if(str[0]==str1[0])
	{
		int ans=1+lcs(str.substr(1),str1.substr(1));
		return ans;
	}
	int option=lcs(str,str1.substr(1));
	int option1=lcs(str.substr(1),str1);
	return max(option1,option);
}
int main()
{
	string str;
	string str1;
	cin>>str;
	cin>>str1;
	int ans=lcs(str,str1);
	cout<<endl<<ans;
}