#include<iostream>
using namespace std;
int main()
{
 string str1;
 char number[9];
 int testcases=0;
 int test=0;
 int count=0;
 cin>>testcases;
 int num1=0;
 int i=1;
 int previous=0;
 cin.ignore();
 while(test<testcases)
 {
 	cin>>str1;
 	int length=str1.length();
 	 if(str1[0]=='D')
 		{
 			num1=1;
 			for(int k=1;str1[k]=='D';k++)
 			{
 				num1++;
 				i=k+1;
 			}
             int s=0;
            for(s=(num1+1);s>0;s--)
            {
            	cout<<s;
            }  
            previous=num1;
            num1=s+1;
        }
        else if(str1[0]=='I')
        {
        	int times=0;//'D' TIMES
           num1=1;
           cout<<num1;
           for(int k=1;str1[k]=='D';k++)
           {
              times++;

              i=k+1;
           }
     
           if(times!=0)
           {
           times=times+2;
           int s=0;
           for(s=times;s>1;s--)
           {
             cout<<s;
           }
           num1=s+1;
           previous=times-2;
           }
           else
           {
           	num1=num1+1;
           	cout<<num1;
           }

        }

 	for(;i<length;i++)
 	{
 		if(str1[i]=='D')
 		{ 
 			num1--;
          cout<<num1;
 		}
 		else
 		{
 			
 			num1=num1+previous;
 			for(int s=i+1;str1[s]=='D';s++)
 			{ 
 				count++;
                
 			}

 			previous=count;
 			num1=num1+count+1;
 			cout<<num1;
 			count=0;
 		}
 	}
        testcases--;
        cout<<endl;
        num1=0;
        previous=0;
        i=1;
 }
 return 0;	
}