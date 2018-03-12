#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int test=0;
	cin>>test;
	while(test--)
	{
		long long int n=0;
		cin>>n;
		long long int *arr=new long long int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		long long int count=0; 
		long long int prev=arr[0];
		for(int i=1;i<n;i++)
		{
			long long int temp=arr[i];
			if(temp==prev)
			{
               count++;
               
			}
			prev=temp;
         }
        cout<<endl<<count;

	}
}