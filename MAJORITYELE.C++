#include<iostream>
using namespace std;
int main()
{
int arr[100];
int n,ele,count=1,maj=0,mid;
cin>>n;
mid=n/2;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
	ele=arr[i];
for(int j=i+1;j<n;j++)
{
	if(cout<<ele==arr[j])
	{
		count++;
		if(count>(mid))
			{
			    maj=ele;
			    
			}
	}
}
count=0;
}
if(maj==0)
{
	cout<< "-1";
}
else
{
	cout<<maj;
}
return 0;
}