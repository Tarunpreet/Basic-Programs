// You are given S a sequence of n integers i.e. S = s1, s2, ..., sn. Please, compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (1 <= i < n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
// That is, in the sequence if numbers are decreasing, they can start increase at one point. And once number starts increasing, they cannot decrease at any point further.
// Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So in both the cases, print true.
// You just need to print true/false. No need to split the sequence.
// Input format :
// Line 1 : n
// Line 2 : n integers
// Sample Input 1 :
// 5
// 9 8 4 5 6
// Sample Output 1 :
// true
// Sample Input 2 :
// 3
// 1 2 3
// Sample Output 2 :
// true
// Sample Input 3 :
// 3
// 8 7 6
// Sample Output 3 :
// true
// Sample Input 4 :
// 6
// 8 7 6 5 8 2
// Sample Output 4 :
// false



#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,num,num1,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>num;
	    if(i!=0)
	    {
	    if(num>num1)
	    {
	        count++;
	    }
	    else
	    {
	        if(count!=0)
	        {
	            cout<<"false";
	            return 0;
	        }
	    }
	    }
	    num1=num;
	}
	cout<<"true";
}