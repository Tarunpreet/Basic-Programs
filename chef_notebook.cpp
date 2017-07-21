#include<iostream>
using namespace std;
int main()
{
	long long int testcases=0;
	cin>>testcases;
	int pgneeded=0;
	int pgleft=0;
	int moneyleft=0;
	long long int notebook=0;
	int lucky=0;
	while(testcases--)
	{
		int price=0;
		int notebookpage=0;
		cin>>pgneeded;
		cin>>pgleft;
		cin>>moneyleft;
		cin>>notebook;
		while(notebook--)
		{
			cin>>notebookpage;
			cin>>price;
			if(price<=moneyleft&&(pgneeded<=(pgleft+notebookpage)))
			{
               lucky=1;
			}
		}
	   if(lucky==0)
	   {
          cout<<endl<<"UnluckyChef";
	   }
	   else
	   {
	   	cout<<endl<<"LuckyChef";
	   }
	   lucky=0;
	}
	return 0;
}