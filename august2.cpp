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
	cin>>test;
	while(test--)
	{
		vector<int> v;
		cin>>n;
		cin>>power;
        for(int i=0;i<n;i++)
        {
        	cin>>x;
        	v.push_back(x);
        }
        for(int p=0;p<(v.size()-power);p++)
        {
   
          	if((v[p]+v[p+power])%2==0)
          	{
          		int div=(v[p]+v[p+power])/2;
          		a = abs(v[p]-v[p+power]);

          		sum=sum+((a)/2);
          		v[p]=div;
          		v[p+power]=div;

          	}
          	else
          	{
          		int div=(v[p]+v[p+power])/2;
          		a = abs(v[p]-v[p+power]);
                sum=sum+((a)/2);
          		if(v[p+power+power]==v[p+power])
          		{
          		v[p]=div;
          		v[p+power]=div+1;
          	    }
          	    else
          	    {
          	    	if(v[p+power]>v[p])
          	    	{
          	    	v[p]=div;
          		    v[p+power]=div+1;
          		    }
          		    else
          		    {
          		    	v[p]=div+1;
          		    	v[p+power]=div;
          		    }

          	    }
          	}
     
        }
        int k=0;
        for(k=1;k<v.size();k++)
        {
        	if(v[k]!=v[0])
        	{
                cout<<"-1"<<endl;
                break;
        	}
        }
        if(k==v.size())
        {
           cout<<sum<<endl;
        }
        sum=0;
        a=0;
        power=0;
        n=0;
	}

return 0;
}