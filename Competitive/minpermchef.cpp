#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int test;
	cin>>test;
	long long int n;

	while(test--)
	{
		cin>>n;
		vector <int> v;
		for(int i=0;i<n-1;i++)
		{
			v.push_back(i+2);
		}
		v[n-1]=1;
		int j=n-1;
		for(int i=1;i<n;i++)
		{
			
           if(v[i]>v[j])
           {
              if((i+1)!=v[j]&&(j+1)!=v[i])
              {
                 int temp=v[i];
                 v[i]=v[j];
                 v[j]=temp;
              }
           }
		}
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
      cout<<endl;
	}
	return 0;

}