#include<iostream>
using namespace std;
void rotate(int* arr,int n,int d)
{
	for(int i=0;i<n-d;i++)
    {
    	if(i<d)
    	{    	
    	int temp=arr[i];
    	arr[n+i-d]=temp;
        }
    }
}
int main()
{
	int n=0;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    rotate(arr,n,2);
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i];
    }
	return 0;
}