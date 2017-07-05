#include<iostream>
using namespace std;

// Print name and average separated by space 
int main() {

	// Write your code here
	int marks[3];
	char name;
	cin>>name;
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
        
    }
    int max=marks[0];
    int secondmax;
    for(int i=1;i<3;i++)
    {
        if(max<=marks[i])
        {
            secondmax=max;
            max=marks[i];
        }
    }
    int avg=(secondmax+max)/2;
    cout<<name;
	cout<<" "<<avg;
	
}
