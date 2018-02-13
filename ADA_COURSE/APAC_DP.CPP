#include<iostream>
using namespace std;
int possiblesen(string vocab[],string sen,string str,string comb[])
{
	int strlen=str.length();
   if(strlen>1)
   {
     for(int i=0;i<5;i++)
     {
     	string check=vocab[i];
     	checklen=check.length();
     	if(strlen==checklen)
     	{
     		bool has=false;
     		for(int j=0;j<strlen;j++)
     		{
     			for(k=0;k<checklen;k++)
     			{
     				if(str[j]==check[k])
     				{
     					has=true;
     				}
     			}
     			if(has==false)
     			{
     				break;
     			}
     		}
     		if(has=true)
     		{
     			comb=
     		}

     	}

     }
     
 
   }
}
int main()
{

string vocab[]={"this","is","a","monster","restnom"};
string sen;
cin>>sen;
cout<<endl<<possiblesen(vocab,sen,sen[0]);
return 0;
}