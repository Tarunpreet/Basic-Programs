
public class solution {

    // Return the changed string
    public static String removeX(String input){
        // Write your code here
      String s="";
      if(input.length()==1)
      {
          if(input.charAt(0)!='x')
          {
              s=s+input.charAt(0);
          }
          return s;
      }
      for(int i=1;i<input.length();i++)
      {
         s=s+input.charAt(i); 
      }
       
      s=removeX(s);
         if(input.charAt(0)!='x')
          {
              s=input.charAt(0)+s;
    
          }
      return s;
      
    }
}
