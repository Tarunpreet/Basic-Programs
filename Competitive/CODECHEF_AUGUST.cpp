#include<iostream>
using namespace std;
int main()
{
	int test;
	int arr[100];
	int arrele=0;
	int middle=0;
	int l=0;
	int s=0;
	cin>>test;
	while(test--)
	{
		cin>>arrele;
		for(int i=0;i<arrele;i++)
		{
			cin>>arr[i];
		}
		middle=arrele/2;
        
		if(arr[middle]==7)
      {
		for(l=middle+1,s=middle-1;arr[l]==7||arr[s]==7;)
        {
        	if(arr[s]==7)
        	{ 
               s=s-1;
        	}
        	if(arr[l]==7)
        	{ 
               l=l+1;
        	}
        }
        
        for(;l<arrele||s>=0;l++,s--)
        {
        	if(l>=arrele||s<0)
        	{
                cout<<"no"<<endl;
                break;
        	}
        	else if(arr[l]!=arr[s])
        	{
               cout<<"no"<<endl;
               break;
        	}
        	 
        }
        if(l==arrele&&(s+1)==0)
        {
        cout<<"yes"<<endl;
        }
        l=0;
        s=0;
        middle=0;
    }
    else
    {
    cout<<"no"<<endl;
    }
	}



return 0;
}