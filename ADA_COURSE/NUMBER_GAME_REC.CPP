//Gary loves to play with numbers. 
//Today he has an array A of N integers. 
//He came up with a game and decided to play it. Given an array A consisting of N integers.
// The player can make several steps. 
//In a single step he can choose an element of the array (let's denote it A[k]) and delete it. 
//And then all elements equal to A[k] + 1 and A[k] - 1 also must be deleted from the array.
//That step brings A[k] points to the player. 
//Gary is a perfectionist, so he decided to get as many points as possible. 
//Help him.
#include<iostream>
using namespace std;
int max_score(int *arr,int n)
{=
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return arr[0];
	}
	int option1,option2;
	option1=max_score(arr+1,n-1);
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[0]+1||arr[i]==arr[0]-1)
		{
			count++;
		}

	}
    int *newarr=new int[n-count-1];
    int k=0;
    for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[0]+1&&arr[i]!=arr[0]-1)
		{
			newarr[k++]=arr[i];
		}

	}
	option2=arr[0]+max_score(newarr,n-count-1);
	int ans;
	ans=max(option1,option2);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<max_score(arr,n);
}
