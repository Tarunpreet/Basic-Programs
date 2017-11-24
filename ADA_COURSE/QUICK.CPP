#include<iostream>
using namespace std;

int partition(int *a,int start,int end)
{
	int part_index=start;
	int pivot=end;
	for(int i=start;i<end;i++)
	{
		if(a[i]<=a[pivot])
		{
            swap(a[i],a[part_index]);
            part_index++;
		}
	}
	swap(a[pivot],a[part_index]);
	return part_index;
}
void quicksort(int *a,int start,int end)
{
	int part_index=0;
	if(start<end)
	{
		 part_index=partition(a,start,end);
		 quicksort(a,start,part_index-1);
		 quicksort(a,part_index+1,end);
	}
}

int main()
{
  int x;
  cout<<"Enter number of integers in array";
  cin>>x;
  int *a=new int[x];
  for(int i=0;i<x;i++)
  {
  	cin>>a[i];
  }
  cout<<endl;
  quicksort(a,0,x-1);
  for(int i=0;i<x;i++)
  {
  	cout<<a[i]<<endl;
  }
}