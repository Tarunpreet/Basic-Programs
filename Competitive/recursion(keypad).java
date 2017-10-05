package recursion2;

public class recursion {
	
       public static String num2text(char a)
       {
    	   if(a=='2')
   			return "abc";
   		else if(a=='3')
   			return "def";
   		
   		else if(a=='4')
   			return "ghi";
   		else if(a=='5')
   			return "jkl";
   		else if(a=='6')
   			return "mno";
   		else if(a=='7')
   			return "pqrs";
   		else if(a=='8')
   			return "tuv";
   		else
   			return "wxyz";
   		
       }
	  public static String[] printsubkeypad(String num)
	     {
	    	 if(num.length()==0)
	    	 {
	    		 String prevout[]=new String[1];
	    		 prevout[0]="";
	    		 return prevout;
	    	 }
	    	 String prevout[]=printsubkeypad( num.substring(1));
	    	 String txt=num2text(num.charAt(0));
	    	 String output[]=new String[txt.length()*prevout.length];
	    	 int k=0;
	    	 for(int i=0;i<prevout.length;i++)
	    	 {
	    		 for(int l=0;l<txt.length();l++)
	    		 {
	    			 
	    			 output[k]=txt.charAt(l)+prevout[i];
	    			 k++;
	    		 }
	    	 }
	    	 return output;
	     }
	     
	     public static void main(String args[])
	     {
	    	 String arr[]=printsubkeypad("23");
	    	for(int i=0;i<arr.length;i++)
	    	 {
	    		 System.out.println(arr[i]);
	    	 }
	    	 
	     }
}
