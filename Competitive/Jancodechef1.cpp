#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,b,c,d;
		
		int x=-1;
		int y=-1;
		int i=0;
		int input3=-1;
		int input1=-1;
		int input2=-1;
		int input4=-1;
		cin>>input1;
        cin>>input2;
        if(input1==input2)
        {
        	cin>>input3;
        	cin>>input4;
        	if(input3==input4)
        	{
        		cout<<endl<<"YES";
        	}
        	else
        	{
        		cout<<endl<<"NO";
        	}
        }
		else
		{
			cin>>input3;
			cin>>input4;
			if(input1==input3&&input2==input4)
			{
				cout<<endl<<"YES";
			}
			else if(input1==input4&&input2==input3)
			{
				cout<<endl<<"YES";
			}
			else
			{
				cout<<endl<<"NO";
			}
		}
	
	}
	
	return 0;
}