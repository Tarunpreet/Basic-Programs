import java.util.PriorityQueue;
@SuppressWarnings("unused")
public class Ninjas 
{
public static void pattern1()
{
	int n=7;
	for(int i=1;i<=n;i++)
	{
		if(i<=4)
		{
			for(int j=1;j<i;j++)
			{
		System.out.print(" ");
		}
			for(int k=0;k<i;k++)
			{
				System.out.print("*");
			}
			System.out.println();
		}
		else
		{
		  for(int j=i;7>j;j++)
		  {
			  System.out.print(" ");
			  
				
			}
		  for(int k=7;k>=i;k--)
			{
				System.out.print("*");
			}
			System.out.println();
		  }
		  
		}
	    }

	
public static int[] kmaximum(int a[],int k)
{
	PriorityQueue<Integer> q=new PriorityQueue<>();
	for(int i=0;i<k;i++)
	{
		q.add(a[i]);
	}
	for(int i=k;i<a.length;i++)
	{
		if(a[i]>q.peek())
		{
			q.remove();
			q.add(a[i]);
		}
	}
	System.out.println(q);
	int arr[]=new int[k];
	for(int i=0;i<k;i++)
	{
		arr[i]=q.remove();
	}
return arr;
}
public static int[] kmaximum1(int a[],int k)
{
	PriorityQueue<Integer> q=new PriorityQueue<>();
	int n=0;
	int arr[]=new int[a.length];
	for(int i=0;i<a.length;i++)
	{
		
		q.add(a[i]);
		int l=i+1;
		if(l%k==0)
		{
			for(int m=0;m<k;m++)
			{
				arr[n++]=q.remove();
		    }
		}
		if(i==a.length-1)
		{
			int s=q.size();
			for(int m=0;m<s;m++)
			{
				arr[n++]=q.remove();
		    }
		}
	}
	
	
return arr;
}
public static  void main(String[] args)
{
	
//pattern1();
int arr[]={1,2,3,5,6,4,10,7,8,12,16};
arr=kmaximum1(arr,3);
for(int i=0;i<arr.length;i++)
{
	System.out.println(arr[i]);
	}
}
}
