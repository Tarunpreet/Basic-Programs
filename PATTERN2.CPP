// Print the following pattern for the given number of rows.
// Pattern for N = 4
// 1
// 11
// 202
// 3003






#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		{ 
		if(i==1)
	   {
	    cout<<"1"<<endl;
	    
	   }
	   else if(i==2)
	    {
	        cout<<"11"<<endl;
	    }
	   else
	   {
	    cout<<(i-1);
	    for(int j=0;j<(i-2);j++)
	    {
	        cout<<"0";
	    }
	    
	    cout<<(i-1);
	    cout<<endl;
	   }
	    
	}
}