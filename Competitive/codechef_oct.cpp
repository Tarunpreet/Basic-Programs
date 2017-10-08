#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    long long  int problems=0;
    long long int partic=0;
    
    while(test--)
    {
    	vector <long long int> v;
    cin>>problems;
    cin>>partic;
    int hard=0;
    int easy=0;
    
    
    	for(int i=0;i<problems;i++)
    	{
    		int x;
    		cin>>x;
          v.push_back(x);
    	} 
    	for(int i=0;i<v.size();i++)
    	{
          if(v[i]<=partic/10)
          {
          	hard++;
          }
          else if(v[i]>=partic/2)
          {
          	easy++;
          }
    	} 
    	if(easy==1&&hard==2)
    	{
    		cout<<"yes"<<endl;
    	}
    	else
    	{
    		cout<<"no"<<endl;
    	}
   
    }

	return 0;
}