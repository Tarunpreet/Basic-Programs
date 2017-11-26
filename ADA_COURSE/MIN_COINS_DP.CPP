#include<iostream>
using namespace std;
int Min_coins(int* coins,int n,int amount,int *coins_needed)
{
	coins_needed[0]=0;
    int min_needed=INT_MAX;
    int needed=0;
	for(int i=1;i<amount+1;i++)
	{
		for(int j=0;j<n;j++)
		{
         if(i>=coins[j])
         {
       	   needed=1+coins_needed[i-coins[j]];
       	   coins_needed[i]=min(coins_needed[i],needed);
         }
        }
        
	}
    for(int i=0;i<=amount;i++)
    {
    	cout<<coins_needed[i]<<endl;
    }
    return coins_needed[amount];
}
int main()
{
	int coins[]={1,2,5,10,50};
    int n=5;
    int amount=39;
    int *coins_needed=new int[amount+1];
    for(int i=0;i<=amount;i++)
    {
    	coins_needed[i]=INT_MAX;
    }
    cout<<Min_coins(coins,n,amount,coins_needed);
}
