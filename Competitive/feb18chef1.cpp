#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
       string s;
       cin>>s;
       int new1=0
       for(int i=0;i<s.length();i++)
      {
       	if(s[i]=='c')
       	{  
       		c++;
       		for(int j=i+1;j<i+4;j++)
       		{
       	      	if(s[i]=='f')
       	        {
       		      f++;
       	        }	
       	        else if(s[i]=='e')
       	        {
       		       e++;
       		    }
             	else if(s[i]=='h')
            	{
             		h++;
             	}
       		}
       		if(c==1&&f==1&&e==1&&h==1)
       		{
       			counter++;
       			c=0;
       			f=0;
       			e=0;
       			h=0;
       		}
       	}
       	else if(s[i]=='f')
       	{
       		f++;
       		for(int j=i+1;j<i+4;j++)
       		{
       	      	if(s[i]=='c')
       	        {
       		      c++;
       	        }	
       	        else if(s[i]=='e')
       	        {
       		       e++;
       		    }
             	else if(s[i]=='h')
            	{
             		h++;
             	}
       		}
       		if(c==1&&f==1&&e==1&&h==1)
       		{
       			counter++;
       			c=0;
       			f=0;
       			e=0;
       			h=0;
       		}
       	}
       	else if(s[i]=='e')
       	{
       		e++;
       		for(int j=i+1;j<i+4;j++)
       		{
       	      	if(s[i]=='f')
       	        {
       		      f++;
       	        }	
       	        else if(s[i]=='c')
       	        {
       		       c++;
       		    }
             	else if(s[i]=='h')
            	{
             		h++;
             	}
       		}
       		if(c==1&&f==1&&e==1&&h==1)
       		{
       			counter++;
       			c=0;
       			f=0;
       			e=0;
       			h=0;
       		}
       	}
       	else if(s[i]=='h')
       	{
       		c++;
       		for(int j=i+1;j<i+4;j++)
       		{
       	      	if(s[i]=='f')
       	        {
       		      f++;
       	        }	
       	        else if(s[i]=='c')
       	        {
       		       c++;
       		    }
             	else if(s[i]=='c')
            	{
             		c++;
             	}
       		}
       		if(c==1&&f==1&&e==1&&h==1)
       		{
       			counter++;
       			c=0;
       			f=0;
       			e=0;
       			h=0;
       		}
       	}
       
    
    }
    if(counter==0)
     {
     	cout<<endl<<"normal";
     }
     else if(counter>0)
     {
     	cout<<endl<<"lovely "<<counter;
     }
 }
    return 0;

}
