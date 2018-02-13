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
       int c=0;
       int counter=0;
       int e=0;
       int f=0;
       int h=0;
       for(int i=0;i<=(int)s.length()-4;i++)
      {
       	if(s[i]=='c')
       	{  
       		c++;
       		for(int j=i+1;j<i+4;j++)
       		{
       	      	if(s[j]=='f')
       	        {
       		      f++;
       	        }	
       	        else if(s[j]=='e')
       	        {
       		       e++;
       		    }
             	else if(s[j]=='h')
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
       		else
       		{
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
       	      	if(s[j]=='c')
       	        {
       		      c++;
       	        }	
       	        else if(s[j]=='e')
       	        {
       		       e++;
       		    }
             	else if(s[j]=='h')
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
       		else
       		{
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
       	      	if(s[j]=='f')
       	        {
       		      f++;
       	        }	
       	        else if(s[j]=='c')
       	        {
       		       c++;
       		    }
             	else if(s[j]=='h')
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
       		else
       		{
       			c=0;
       			f=0;
       			e=0;
       			h=0;
       		}
       	}
       	else if(s[i]=='h')
       	{
       		h++;
       		for(int j=i+1;j<i+4;j++)
       		{
       	      	if(s[j]=='f')
       	        {
       		      f++;
       	        }	
       	        else if(s[j]=='c')
       	        {
       		       c++;
       		    }
             	else if(s[j]=='e')
            	{
             		e++;
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
       		else
       		{
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
