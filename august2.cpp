#include<iostream>
#include<vector>
#include<cmath> 

using namespace std;
int main()
{
	int test;
	int n;
  long long int x;
	int power;
	long long int sum=0;
	long long int a=0;
  long long int median=0;
	cin>>test;
	while(test--)
	{
		vector<int> v;
		cin>>n;
		cin>>power;
        for(int i=0;i<n;i++)
        {
        	cin>>x;
          sum1=sum1+x;
        	v.push_back(x);
        }
        median=sum1/v.size();
        for(int p=0;p<(v.size()-power);p++)
        {
           diff1=abs(v[p]-median);
           diff2=abs(v[p+power]-median);
           if(v[p]>median)
           {
            if(diff1<diff2)
            {
              v[p]=v[p]-diff1;
              v[p+power]=v[p+power]+diff1;
           }
           else
           {
            v[p]=v[p]-diff2;
             v[p+power]=v[p+power]+diff2;
           }
         }
         else
         {

         }
          	
  
      
        
        sum=0;
        a=0;
        power=0;
        n=0;
         }
	}

return 0;
}