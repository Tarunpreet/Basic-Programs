//https://www.codechef.com/SEPT17/problems/CHEFSUM
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int test;
	cin>>test;
	int n;
	
	long long int sum2=0;
	long long int sum1=0;
	long long int index=0;
	long long int total=0;
	long long int min=0;
	long long int x=0;
	while(test--)
	{
		vector<int> v; 
		cin>>n;
        for(int i=0;i<n;i++)
        {
        	x=0;
        	cin>>x;
        	v.push_back(x);
        	sum2=sum2+x;

        }
        sum1=v[0];
        total=sum1+sum2;
        min=total;
        index=1;
        for(int i=1;i<n;i++)
        {
           sum1=sum1+v[i];
           sum2=sum2-v[i-1];
           total=sum1+sum2;
           if(total<min)
           {
               min=total;
               index=i+1;
           }
        }
        cout<<index<<endl;
        sum1=0;
        sum2=0;
        min=0;
        total=0;
        index=0;
	}
	return 0;
}
