// Print the following pattern for the given number of rows.
// Pattern for N = 4
// 1
// 11
// 111
// 1111
// Input format : N (Total no. of rows)
// Output format : Pattern in N lines


#include<iostream>
using namespace std;

int main() {
    int n;
	// Write your code here
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    for(int j=0;j<i;j++)
	    {
	        cout<<"1";
	    }
	    cout<<endl;
	}
}
