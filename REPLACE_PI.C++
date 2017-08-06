public class solution {

  // Return the changed string
  public static String replace(String input){
    // Write your code here
    String answer="";
    if(input.length()==0)
    {
        return answer;
    }
    if(input.length()==1)
    {
        return answer+input.charAt(0);
    }
    if(input.substring(0,2).equals("pi"))
    {
        return answer+"3.14"+replace(input.substring(2));
    }
    return answer+input.charAt(0)+replace(input.substring(1));
  }
}
