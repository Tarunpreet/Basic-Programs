
public class subset {
	public static void printsub(int arr[],int input[],int k,int n)
    {
        if(k==n)
        {
            arr[k]=0;
            print(arr,input);
            arr[k]=1;
            print(arr,input);
        }
        arr[k]=0;
        printsub(arr,input,k+1,n);
   	 arr[k]=1;
   	 printsub(arr,input,k+1,n);
    }
    public static void print(int arr[],int input[])
    {
        int sum=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==1)
            {
                System.out.print(input[i]+" ");
                sum++;
            }
        }
        if(sum==0)
        {
             System.out.println();
        }
    }
	public static void printSubsets(int input[]) {
		int arr[]=new int[input.length];
	printsub(arr,input,0,input.length-1);
	}
	public static void main(String args[])
	{
		int arr1[]={15,20,12};
		printSubsets(arr1);
	}
}
