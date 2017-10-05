#include<iostream>
#include <vector>
using namespace std;
void helper(int arr[],int i,int j,int v[])
{
   if(i==j)
   {
   	for (int k = 0; k<3; ++k)
	{
		if(v[k]!=0)
		{
	   cout<<v[k]<<" ";	
	    }
   }
   cout<<endl;
   }
   else
   {
   v[i]=0;
   helper(arr,i+1,j,v);
   v[i]=arr[i];
   helper(arr,i+1,j,v);
}
}
void printsubset(int arr[],int i,int j)
{

	int v[3];
    helper(arr,i,j,v);

}

int main()
{
	int arr[3];
	for (int i = 0;i<3; ++i)
	{
	   cin>>arr[i];	
	}
	printsubset(arr,0,3);
}