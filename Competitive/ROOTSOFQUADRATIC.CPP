// Write a program to calculate the roots of a given quadratic equation -
//       a(x^2) + bx + c = 0 
// Print roots specifying their nature. If roots are imaginary, no need to print the roots.
// Print the nature of roots in the form of an integer -
//  0 : if roots are real & same
//  1 : if roots are real & different
// -1 : if roots are imaginary
// Round off the roots and then print the integral part only i.e. without any decimal places.
// You can assume that, input will always be a quadratic equation.
// Input format : a b c (separated by space)
// Output format :
// Line 1 : Nature of roots (0 or 1 or -1)
// Line 2 : Root 1 and Root 2 (separated by space)

#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	long long int a,b,c,d,rt1,rt2;
	double root1,root2;
	cin>>a;
	cin>>b;
	cin>>c;
	

	d=b*b-4*a*c;
if(a!=0)
{
	if(d==0)
	{
		root1=-(b + sqrt(d)) / (2*a);
      	if(root1<0)
		{
		     rt1=-(root1);
		     if((-root1)>(double)(rt1+0.5))
		     {
		        root1=-(root1);
		      
		        root1=root1+1;
		        root1=-root1;
		      }
		}
		else
		{
		    
		    rt1=root1;
		    if((root1)>(double)(rt1+0.5))
		    {
		    
		    root1=root1+1;
		    
	     	}
	     	
		 }
		
		root2=root1;
		cout<<"0";
        cout<<"\n"<<(long)root2<<" "<<(long)root1;
		
  	}
	else if(d>0)
	{
		root1=-(b+sqrt(d))/(2*a); 
		
		root2=-(b-sqrt(d))/(2*a);
		if(root1<0)
		{
		     rt1=-(root1);
		     if((-root1)>(double)(rt1+0.5))
		     {
		        root1=-(root1);
		        root1=root1+1;
		        root1=-root1;
		      }
		}
		else
		{
		    
		    rt1=root1;
		    if((root1)>(double)(rt1+0.5))
		    {
		    
		    root1=root1+1;
		    
	     	}
		 }
		if(root2<0)
		{     rt2=-(root2);     
		        if((-root2)>(double)(rt2+0.5))
		         {
		          root2=-(root2);
		          root2=root2+1;
		          root2=-(root2);
		        }

		}
		else
		{
			rt2=root2;
		    if((root2)>(double)(rt2+0.5))
		    {
		    
		    root2=root2+1;
		    
	     	}
		}
		cout<<"1";
		cout<<"\n"<<(int)root2<<" "<<(int)root1;
		
	}
	else
	{
	
		cout<<"-1";
	}

	
}

	return 0;
}
 