#include<iostream>
using namespace std;
int Min_coins(int* coins,int n,int amount)
{
	if(amount==0)
	{
		return 0;
	}
	int ans=INT_MAX;
	int coin_needed=0;
	for(int i=0;i<n;i++)
	{
		if(amount-coins[i]>=0)
		{
       coin_needed=1+Min_coins(coins,n,amount-coins[i]);
       ans=min(ans,coin_needed);
   }
	}

    
    return ans;
}
int main()
{
	int coins[]={1,7,10};
    int n=3;
    int amount=21;
    cout<<Min_coins(coins,n,amount);
}
