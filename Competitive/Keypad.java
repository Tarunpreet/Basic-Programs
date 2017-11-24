public class Solution {

       public static String num2text(int a)
       {
    	   if(a==2)
   			return "abc";
   		else if(a==3)
   			return "def";
   		
   		else if(a==4)
   			return "ghi";
   		else if(a==5)
   			return "jkl";
   		else if(a==6)
   			return "mno";
   		else if(a==7)
   			return "pqrs";
   		else if(a==8)
   			return "tuv";
   		else
   			return "wxyz";
   		
       }
	public static String[] keypad(int n){
		// Write your code here
   if(n==0)
	    	 {
	    		 String prevout[]=new String[1];
	    		 prevout[0]="";
	    		 return prevout;
	    	 }
	    	 String prevout[]=keypad(n/10);
	    	 String txt=num2text(n%10);
	    	 String output[]=new String[txt.length()*prevout.length];
	    	 int k=0;
	    	 for(int i=0;i<prevout.length;i++)
	    	 {
	    		 for(int l=0;l<txt.length();l++)
	    		 {
	    			 
	    			 output[k]=prevout[i]+txt.charAt(l);
	    			 k++;
	    		 }
	    	 }
	    	 return output;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String arr[]=keypad(23);
    	for(int i=0;i<arr.length;i++)
    	 {
    		 System.out.println(arr[i]);
    	 }
	}
	
}

