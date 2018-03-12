#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int test;
	cin>>test;

	while(test--)
	{
		int n=0;
		cin>>n;
		double **arr=new double*[n];
        for(int i=0;i<n;i++) 
	     { 
	       arr[i]=new double[3];
	     }
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<3;j++)
        	{
                cin>>arr[i][j];
        	}
        }
        long double totalloss=0.00;
        for(int i=0;i<n;i++)
        {
        	 long double temp=(((double)arr[i][2]/100.0)*(double)arr[i][0]);
             long double newprice=(double)arr[i][0]+temp;
             long double temp1=(((double)arr[i][2]/100.0)*newprice);
             long double sellingprice=newprice-temp1;
             long double loss=(((double)arr[i][0]-sellingprice)*(double)arr[i][1]);
             totalloss=totalloss+loss;
        }

      cout<<endl<<setprecision(16)<<totalloss;
	}
}