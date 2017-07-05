package withoutrec;

public class withoutree {
	public static String[] combination(String s1)
	{
		String prev[]=new String[1];
		  prev[0]="";
		  for(int i=0;i<3;i++)
		  {
		  	int l=0;
		   String out[]=new String[s1.length()*prev.length];
		  	for(int j=0;j<s1.length();j++)
		  	{
		  		for(int k=0;k<prev.length;k++)
		  		{

		  			out[l]=prev[k]+s1.charAt(j);
		  			l=l+1;
		  		}
		  		
		  	}
		  	prev=out;
		  
		  }
		  return prev;
	}

	public static void main(String[] args) {

		  String s="abc";
		  String s2[]=combination(s);
		  int i=0;
		  for( i=0;i<s2.length;i++)
	        {
	        	System.out.println(s2[i]);
	        }
		  System.out.println(i);
	}

}
