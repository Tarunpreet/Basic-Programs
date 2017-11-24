#include<iostream>
using namespace std;
void merge(int* a,int *b,int size1,int *c,int size2)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<size1&&j<size2)
    {
    	if(b[i]<=c[j])
    	{
    		a[k]=b[i];
    		i++;
    		k++;
    	}
    	else
    	{
    		a[k]=c[j];
    		j++;
    		k++;
    	}
  
    }
    while(i<size1)
    {
    	a[k]=b[i];
    	i++;
    	k++;
    }
    while(j<size2)
    {
    	a[k]=c[j];
    	j++;
    	k++;
    }
   
}
void mergesort(int* a,int x)
{
	if(x<2)
	{
		return;
	}
	int mid=x/2;
	int length_a=mid;
    int length_b=x-mid;
	int *b=new int[length_a];
    int *c=new int[length_b];
    for(int l=0;l<mid;l++)
    {
    	b[l]=a[l];
    }
    for(int m=mid;m<x;m++)
    {
    	c[m-mid]=a[m];
    }

		mergesort(b,mid);
		mergesort(c,x-mid);
		merge(a,b,mid,c,x-mid);

}
int main()
{
	cout<<"ENTER NUMBER OF ELEMENTS ";
	int x;
	cin>>x;

	int *a=new int[x];
	for(int i=0;i<x;i++)
  {
  	cin>>a[i];
  }
  cout<<endl;
	mergesort(a,x);
	for(int i=0;i<x;i++)
  {
  	cout<<a[i]<<endl;
  }
}