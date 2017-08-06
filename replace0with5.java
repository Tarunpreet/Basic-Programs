import java.util.Scanner;
public class Main {
	
	public static void main(String[] args) {
		int num,rev=0,rev1=0,rem,temp;
		Scanner s1=new Scanner(System.in);
		num=s1.nextInt();
		temp=num;
		while(temp!=0)
		{
		    rem=temp%10;
		    if(rem==0)
		    {
		        rem=5;
		        
		    }
		    rev=rev*10+rem;
		    temp=temp/10;
		}
		
		while(rev!=0)
		{
		    rem=rev%10;
		    rev1=rev1*10+rem;
		    rev=rev/10;
		}
		System.out.print(rev1);

	}
}