// //Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
// N varies from 1 to last.
// Input format : x
// Output format : Terms of series (separated by space)
// Sample Input 1 :
// 10
// Sample Output 1 :
// 5 11 14 17 23 26 29 35 38 41
// Sample Input 2 :
// 4
// Sample Output 2 :
// 5 11 14 17


#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    if(((3*i)+2)%4!=0)
	    {
	       cout<<((3*i)+2)<<" "; 
	    }
	    else
	    {
	        n=n+1;
	    }
	}
	return 0;
	
}
