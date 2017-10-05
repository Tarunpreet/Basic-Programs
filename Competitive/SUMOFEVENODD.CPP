// Write a program to input a number and print the sum of all it’s even digits and sum of all its odd digits separately.
// Digits means, numbers not the places. That is, if a number is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
// Input format : An integer
// Output format : Sum_of_Even_Digits Sum_of_Odd_Digits
// (Print first even sum and then odd sum separated by space)



#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int num,rem,sume=0,sumo=0;
	cin>>num;
	while(num!=0)
	{
	    rem=num%10;
	    if((rem%2)==0)
	    {
	        sume=sume+rem;
	    }
	    else
	    {
	        sumo=sumo+rem;
	    }
	    num=num/10;
	}
	cout<<sume<<" "<<sumo;
}
