package STRINGS;

public class PrintCombinationTillN
{
	static int x=1;
	public static void printcomb(String input,String output)
    {
	
   	 if(output.length()==3)
   	 {
   		 System.out.println( x + output);
   		 x=x+1;
   		 return;
   	 }
   	 for(int i=0;i<input.length();i++){
   		 printcomb(input,output+input.charAt(i));
    }
}
	public static void main(String args[])
    {
   	 printcomb("abc","");
    }
}
