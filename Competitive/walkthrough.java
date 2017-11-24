import java.util.Scanner;

public class walkthrough {
        public static void main(String[] args)
        {
        	int a[]=new int[20];
        	int b[]=new int[20];
        	int sum1=0,sum2=0,totalsum=0;
        	int n;
        	int m;
        	Scanner s1=new Scanner(System.in);
        	n=s1.nextInt();
        	m=s1.nextInt();
  
        	for(int i=0;i<n;i++)
        	{
        		a[i]=s1.nextInt();
        		
        	}
        	for(int j=0;j<m;j++)
        	{
        		b[j]=s1.nextInt();
        	}
        	int i=0;
        	int j=0;
        	while(i<n&&j<m)
        	{
        		 
        		  if(a[i]<b[j])
        		{
        			sum1=sum1+a[i];
        			
                  
        			 
        			 
        			 if(i==n-1&&j==n-1)
        			 {
        				 sum2=sum2+b[j];
        			 }
        			 i++;
        			 
        		}
        		else if(a[i]>b[j])
        		{
        			sum2=sum2+b[j];
    
        			
        			
        			if(i==n-1&&j==n-1)
       			 {
       				 sum1=sum1+b[j];
       			 }
        			j++;
        		}
        		else if(a[i]==b[j])
        		{
        			if(sum1>=sum2)
        			{
        				totalsum=totalsum+sum1+a[i];
        				sum1=0;
        				sum2=0;
        						
        			}
        			else if(sum1<sum2)
        			{
        				totalsum=totalsum+sum2+a[i];
        				sum2=0;
        				sum1=0;
        			}
        			i++;
        			j++;
        		
        		}
        		
        		
        	}
        	if(sum1>=sum2)
        	{
        		totalsum=totalsum+sum1;
        	}
        	else
        	{
        		totalsum=totalsum+sum2;
        	}
   
        	System.out.print(totalsum);
        }
        
        }	
        	
        

