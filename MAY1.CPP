#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<string> v;
	int testcases;
	int i=0;
  int eat=0;
  int h=0;
	string str1;

	cin>>testcases;
	cin.ignore();
	while(i<testcases)
	{
		cin>>str1;
         int length=(str1.length());
         int k=0;
        
          for(k=0;k<length;k++)
          {
          	if(str1[k]=='S')
          	{
          		h=1;

          	}
          	else if(str1[k]=='C')
          	{
          		if(h==1)
          		{
          			v.push_back("no");
          			break;
          		}
              else if(eat==1)
              {
                v.push_back("no");
                break;
              }
              continue;
          	}
          	else if(str1[k]=='E')
          	{
          		if(h==1)
          		{
          			v.push_back("no");
          			break;
          		}
              eat=1;
                            continue;

          		
          	}
          	
          }
        
          if(k==length)
          {
          v.push_back("yes");
          }
           eat=0;
           h=0;
           length=0;
           
		i++;
	}
  for (int p=0;p<v.size();p++)
{
cout<<v[p]<<endl;
}
	
}
