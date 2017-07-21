/*
calculate number of ways to cross a river which has x stones
in it and can only take 1 step or 2 steps at a time
p&c problem
*/
#include<iostream>
using namespace std;
int stonecount(int x)
{
if(x==0)
{
	return 1;//no stone further only can jump to other landmass

}
else if(x==1)
{
	return 2;//one stone further can directly land on landmass or can go to other stone 
}
return stonecount(x-1)+stonecount(x-2);
}
int main()
{
int x;
cin>>x;
x=stonecount(x);
cout<<x;
return 0;
}
/*
crossing the river by 6 unit steps=1 ways
4 units step and 1 double step=5c1=5
2 units step and 2 double step=4c2=6(as cannot jump 2 step from last stone)
3 double stone=1
total=13 for 5 stone 
*/
