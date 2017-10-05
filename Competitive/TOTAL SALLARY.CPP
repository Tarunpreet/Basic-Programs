// Write a program to calculate the total salary of a person. The user has to enter the basic and the grade and depending upon which the total salary is calculated as -
//     t_sal = basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	double basic,hra,da,allow,pf,ts,t_s;
	char ch;
	cin>>basic;
	cin>>ch;
	hra=(0.2)*basic;
	da=(0.5)*basic;
	pf=(0.11)*basic;
	if(ch=='A')
	{
	    allow=1700;
	}
	else if(ch=='B')
	{
	    allow=1500;
	}
	else
	{
	    allow=1300;
	}
	ts=basic+hra+da+allow;
	t_s=ts-pf;
	int t=t_s;
	if((t_s)>(t+0.5))
	{
	    t_s=t_s+1;
	}
	cout<<int(t_s);
	return 0;
}
