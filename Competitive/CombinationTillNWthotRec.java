package STRINGS;

public class CombinationTillNWthotRec {
	public static String[] returncombination(String s1,int n)
	{
		String s2[] = new String[1];
		s2[0]="";
	
		for(int i=0;i<n;i++)
		{
			int l=0;
			String s3[]=new String[s2.length*s1.length()];
			for(int j=0;j<s1.length();j++)
			{
				for(int k=0;k<s2.length;k++)
				{
					s3[l]=s1.charAt(j)+s2[k];
					l++;
				}
				
				
			}
			s2=s3;
			for(int m=0;m<s2.length;m++)
	         {
	        	 System.out.println(s2[m]);
	         }
			
		}
		return s2;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         String s1="abc";
         String s2[]=returncombination(s1,3);
         
	}

}
