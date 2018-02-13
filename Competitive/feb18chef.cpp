#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    	long int npatents=0;
    	long int months=0;
    	long int personspermonth=0;
    	long int persons=0;
        long int even=0;
        long int odd=0;
    	cin>>npatents;
        cin>>months;
    	cin>>personspermonth;
    	cin>>persons;

    	string evodd;
    	cin>>evodd;
    	for(int i=0;i<persons;i++)
    	{
    		if(evodd[i]=='E')
    		{
              even++;
    		}
    		if(evodd[i]=='O')
    		{
              odd++;
    		}
    	}
        if(months==0)
        {
            cout<<endl<<"no";
            continue;
        }
        if(personspermonth==0)
        {
            cout<<endl<<"no";
            continue;
        }
        if(npatents>persons)
        {
            
            cout<<endl<<"no";
            continue;
        }
        long int monthsrequired=0;
        
            monthsrequired=npatents/personspermonth;
        if(monthsrequired>months)
        {
            
            cout<<endl<<"no";
            continue;
        }
       
    	for(int i=1;i<=months;i++)
        {
            if(npatents>0)
            {
            if(i%2!=0)
            {
                 if(odd>personspermonth)
                 {
                    odd=odd-personspermonth;
                    npatents=npatents-personspermonth;
                 }
                 else
                 {

                 npatents=npatents-odd;
                 odd=0;
                 } 
            }
            else
            {
                 if(even>personspermonth)
                 {
                    even=even-personspermonth;
                    npatents=npatents-personspermonth;
                 }
                 else
                 {
                    npatents=npatents-even;
                    even=0;
                 }
            }
        }
        else
        {
            break;
        }
        }
        if(npatents>0)
        {
            
            cout<<endl<<"no";
        }
        else
        {

            cout<<endl<<"yes";
        }
    }
        
return 0;
}
