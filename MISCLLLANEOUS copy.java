package l16;

import java.util.HashMap;

public class MISCLLLANEOUS {
//	public static int maxSum(int a[],int output[], int startIndex) {
//		if (startIndex == a.length) {
//			return 0;
//		}
//		
//		if (startIndex == a.length - 1) {
//			return Math.max(0, a[startIndex]);
//		}
//		if(output[startIndex]>0)
//		{
//			return output[startIndex];
//		}
//		int option1 = maxSum(a, output,startIndex + 1);
//		int option2 = maxSum(a, output,startIndex + 2) + a[startIndex];
//		output[startIndex]=Math.max(option1, option2);
//		return Math.max(option1, option2);
//		
//	}
//	public static int maxSum1(int a[], int startIndex) {
//		if (startIndex == a.length) {
//			return 0;
//		}
//		
//		if (startIndex == a.length - 1) {
//			return Math.max(0, a[startIndex]);
//		}
//		
//		int option1 = maxSum1(a, startIndex + 1);
//		int option2 = maxSum1(a, startIndex + 2) + a[startIndex];
//		return Math.max(option1, option2);
//	}
////	public static int edistance(String a,String b,int [][]a2) {
//		if(a.length()==0&&b.length()==0)
//		{
//			return 0;
//		}
//		if(a.length()==0)
//		{
//			return b.length();
//		}
//		if(b.length()==0)
//		{
//			return a.length();
//		}
//		if(a.charAt(0)==b.charAt(0))
//				{
//			int min=edistance(a.substring(1), b.substring(1),a2);
//			return min;
//				}
//		if(a2[a.length()][b.length()]>=0)
//		{
//			return a2[a.length()][b.length()];
//		}
//		int option1=1+edistance(a.substring(1), b,a2);
//		int option2=1+edistance(a, b.substring(1),a2);
//		int option3=1+edistance(a.substring(1), b.substring(1),a2);
//		int min=Math.min(Math.min(option1, option2),option3);
//		a2[a.length()][b.length()]=min;
//		return min;
//	}
//	public static void intersection(int arr[],int arr2[]) {
//		HashMap<Integer, Integer> h1 = new HashMap<>();
//		for(int i=0;i<arr.length;i++)
//		{
//			h1.put(arr[i],arr[i]);
//		}
//		for(int j=0;j<arr2.length;j++)
//		{
//			if(h1.containsKey(arr2[j]))
//			{
//				System.out.println(arr2[j]);
//			}
//		}
//	}
	public static void stringpermwithoutsamepos(String a,char[] a1,int index)
	{
		if(index==a.length())
		{
			
			for(int i=0;i<a.length();i++)
			{
				System.out.print(a1[i]);
			}
			System.out.println();
			return;
		}

			for(int j=0;j<a.length();j++)
			{
				
					if(index!=j)
					{
					if(a1[j]=='1')
					{
			          a1[j]=a.charAt(index);
			        stringpermwithoutsamepos(a, a1, index+1);
			        a1[j]='1';
					}
		            }
		
		}
	}
	public static void printpermwithoutupper(String a,char a1[],int index)
	{
		if(index==a.length())
		{
			
			for(int i=0;i<a.length();i++)
			{
				System.out.print(a1[i]);
			}
			System.out.println();
			return;
		}
		for(int i=0;i<a.length();i++)
		{
			if(!Character.isUpperCase(a.charAt(index)))
					{
				           if(a1[i]=='1')
				           {
				        	   if(!Character.isUpperCase(a.charAt(i)))
				        	   {
				        	   a1[i]=a.charAt(index);
				        	   printpermwithoutupper(a, a1, index+1);
				        	   a1[i]='1';
				        	   }
				           }
					}
			else
			{
				a1[index]=a.charAt(index);
			i=i+index-1;
		}
		}
	}
	
	
	
	

	
	
	
	
	
	
	
  public static void main(String args[])
{
	  String a="AbDc";
	 
	char a1[]=new char[4];
	for(int i=0;i<a1.length;i++)
	{
		a1[i]='1';
	}
//	int arr[]=new int[3];
//	int arr2[]=new int [4];
//	for(int i=0;i<arr.length;i++)
//	{
//		arr[i]=i;
//	}
//	for(int i=0;i<arr2.length;i++)
//	{
//		arr2[i]=i;
//	}
	//stringpermwithoutsamepos(a,a1,0);
	 printpermwithoutupper(a,a1,0);
	 //intersection(arr,arr2);
//	  
//	 
//	  int a1[]={1,2,3,4,5,6};
//	  int out[]=new int[a1.length+1];
//	  int a2[][]=new int[a.length()+1][b.length()+1];
//	  for(int i=0;i<a2.length;i++)
//	  {
//		  for(int j=0;j<a2[i].length;j++)
//		  {
//			  
//			  a2[i][j]=-1;
//		  }
//	  }
//	  System.out.println(maxSum(a1,out,0));
//	  System.out.println(edistance(a, b,a2));
	}
}
