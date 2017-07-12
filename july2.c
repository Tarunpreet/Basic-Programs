#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	
	// vector<int> v;
	long long int  testcases;
	long long int maximum=0;
	long long int count=0;
	scanf("%lld",&testcases);
   char s[100006];
	
	char ch;
	while(testcases--)
	{
		scanf("%s",s);
		char s1[100006]="";
		long long int i,j;
		for(i=0,j=0;s[i]!='\0';i++)
		{
            if(s[i]!='=')
            {
            	s1[j]=s[i];
            	j++;
            	//cout<<endl<<s1;
            }
            
		}
		i=0;
		while(i<j)
		{
			ch=s1[i];
			long long int k;
			count=1;
            	for(k=i+1;s1[k]!='\0';k++)
            	{
            		if(ch==s1[k])
            		{
                      count++;
            		}
            		else
            		{
            			break;
            		}
            	}
            	if(count>=maximum)
            	{
            		
            		maximum=count;
            	}
            	count=1;

                i=k;
                //cout<<endl<<i;
                }
        printf("%lld\n",maximum+1 );
        maximum=0;
		
	}
	return 0;
}