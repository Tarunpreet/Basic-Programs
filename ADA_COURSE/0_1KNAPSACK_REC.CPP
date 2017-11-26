#include <iostream>
using namespace std;
int MaxProfit(int* price,int * weight,int weight_bag,int n)
{
	if(weight_bag<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 0;
	}
	int ans=0;
	int option=0;
	if(weight_bag>=weight[0])
	{
    option=price[0]+MaxProfit(price+1,weight+1,weight_bag-weight[0],n-1);
    }
    int option1=MaxProfit(price+1,weight+1,weight_bag,n-1);
    ans=max(option,option1);
    return ans;
}




int main()
{
	int price[]={15,8,8};
    int weight[]={7,4,4};
    int weight_bag=10;
    cout<<endl<<MaxProfit(price,weight,weight_bag,3);
}