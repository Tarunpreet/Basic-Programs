#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int test;
	cin>>test;

     
	while(test--)
	{

      int n;
	  cin>>n;
      vector<long long int> G;
      vector<long long int> H;
      for(int i=0;i<n;i++)
      {
    	long long int x;
    	cin>>x;
    	H.push_back(x);
      }
      for(int i=0;i<n;i++)
       {
    	long long int x1;
    	cin>>x1;
    	G.push_back(x1);
       }
       int front=0;
       for(int i=0;i<n;i++)
       {
       	if(G[i]<H[i])
       	{
          front=0;
          break;
       	}
       	else
       	{
       		front=1;
       	}
       }
       int back=0;
       int j=0;
       for(int i=0,j=n-1;i<n;i++,j--)
       {
       	if(G[j]>=H[i])
       	{
          back=1;
          
       	}
       	else
       	{
       		back=0;
       		break;
       	}
       }
       if(back==1&&front==1)
       {
       	cout<<endl<<"both";
       }
       else if(back==1&&front!=1)
       {
       	cout<<endl<<"back";
       }
       else if(back!=1&&front==1)
       {
       	cout<<endl<<"front";
       }
       else if(back==0&&front==0)
       {
       	cout<<endl<<"none";
       }
	}
	return 0;
}