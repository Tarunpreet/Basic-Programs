public class solution {

  public static int convertStringToInt(String input){
    // Write your code here
    int a=0;
    
    String out="";
    int j=input.length()-1;
  if(input.length()==1)
  {
      
      return (input.charAt(0)-'0');
  }
  for(int i=0;i<input.length()-1;i++)
  {
      out=out+input.charAt(i);
  }
  
  a=(convertStringToInt(out)*10)+(input.charAt(j)-'0');
  return a;
  }
}
