#include<bits/stdc++.h>
//#include <iostream>
#include<vector>
using namespace std;
int main()
{
	long long int num;
	
	int arr[10];
	
	int test=0;
	cin>>test;
	while(test--)
	{
		vector<int> v;
		vector<int> a;
		cin>>num;
		long long int temp=num;
		long num1=0;
		long int size=0;
		int rem=0;
		for(int i=0;i<10;i++)
	    {
		arr[i]=0;
	    }
		while(temp!=0)
		{
			rem=temp%10;
			arr[rem]++;
			v.push_back(rem);
			temp=temp/10;
			size++;
		}
		sort(v.begin(),v.end());
        int temp2=0;
        int temp3=0;
        for(long long int i=size-1;v[i]>=6;i--)
        {
        	if(v[i]>6&&v[i]<9)
        	{
        		for(int j=0;j<10;j++)
        		{
        			if(v[i]==j)
        			{
        				if(arr[j]>1)
        				{
                            if(temp2!=v[i]+j)
                            {
        					num1=(v[i]*10)+j;
                            temp2=v[i]+j;
        					a.push_back(num1);
                            }
        				}
        			}
                    else if(arr[j]>=1)
                    {
                        if(temp3!=v[i]+j)
                        {
                            temp3=v[i]+j;
        			num1=(v[i]*10)+j;

        			a.push_back(num1);
        			}
                }
        		}
        	}
        	else if(v[i]==6)
        	{
                for(int k=5;k<=9;k++)
                {
                	if(v[i]==k)
        			{
                        if(temp2!=v[i]+k)
                        {
        				if(arr[k]>1)
        				{
                            temp2=v[i]+k;
        					num1=(v[i]*10)+k;
        					a.push_back(num1);
        				}
                        }
        			}
        			else if(arr[k]>=1)
                    {
                        if(temp3!=v[i]+k)
                        {
                            temp3=v[i]+k;
        			 num1=(v[i]*10)+k;
        			 a.push_back(num1);
        			    }
                    }
                } 
        	}
        	else if (v[i]==9)
        	{
        		if(arr[0]>=1)
        		{
                    num1=(v[i]*10)+0;
        			a.push_back(num1);
        		}
        	}
        }
        sort(a.begin(),a.end());
        
        for(int i=0;i<a.size();i++)
        {
        	
        	
        	
            cout<<(char)a[i];
        }
        cout<<endl;
    }

	return 0;
}