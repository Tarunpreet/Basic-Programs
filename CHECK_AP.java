import java.util.Scanner;
public class Main {
	
	public static void main(String[] args) {
	
	int n,num,num1=0,count=0,sub=0;
	Scanner s1=new Scanner(System.in);
	n=s1.nextInt();
	for(int i=0;i<n;i++)
	{
	    num=s1.nextInt();
	    if(i==0||i==1)
	    {
	        sub=num-num1;
	    }
	    else
	    {
	        if((num-num1)!=sub)
	        {
	            count=count+1;
	        }
	    }
	    num1=num;
	    
	}
	if(count==0)
	{
	System.out.println("true");
	}
	else
	{
	    System.out.println("false");
	}
}

}