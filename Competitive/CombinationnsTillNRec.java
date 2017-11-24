package STRINGS;

public class CombinationnsTillNRec {
	public static String[] returncombination(String s1,int n)
	{
		if(n==0)
		{
			String s2[]=new String[1];
			s2[0]="";
			return s2;
		}
		String s2[]=returncombination(s1, n-1);
		String s3[]=new String[s2.length*s1.length()];
		int l=0;
		for(int i=0;i<s1.length();i++)
		{
			
			for(int j=0;j<s2.length;j++)
			{
				s3[l]=s2[j]+s1.charAt(i);
				l++;
			}
		}
		return s3;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
         String s1="abc";
         String s2[]=returncombination(s1,3);
         for(int m=0;m<s2.length;m++)
         {
        	 System.out.println(s2[m]);
         }
	}
}
