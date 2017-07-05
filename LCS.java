package l21;

public class LCS {
	
	public static int LCSHelper(String s1, String s2, int output[][]) {
		if (s1.length() == 0 || s2.length() == 0) {
			return 0;
		}
		
		int s1Len = s1.length();
		int s2Len = s2.length();
		if (output[s1Len][s2Len] >= 0) {
			return output[s1Len][s2Len];
		}
		
		int answer;
		if (s1.charAt(0) == s2.charAt(0)) {
			answer = 1 + LCSHelper(s1.substring(1), s2.substring(1), output);
		} else {
			int option1 = LCSHelper(s1, s2.substring(1), output);
			int option2 = LCSHelper(s1.substring(1), s2, output);
			answer = Math.max(option1, option2);
		}
		output[s1Len][s2Len] = answer;
		return answer;
	}
	
	public static int LCS2(String s1, String s2) {
		int output[][] = new int[s1.length() + 1][s2.length() + 1];
		for (int i = 0; i < s1.length() + 1; i++) {
			for (int j = 0; j < s2.length() + 1; j++) {
				output[i][j] = -1;
			}
		}
		int ans = LCSHelper(s1, s2, output);
		return ans;
	}

	public static int LCS1(String s1, String s2) {
		if (s1.length() == 0 || s2.length() == 0) {
			return 0;
		}
		if (s1.charAt(0) == s2.charAt(0)) {
			return 1 + LCS1(s1.substring(1), s2.substring(1));
		} else {
			int option1 = LCS1(s1.substring(1), s2);
			int option2 = LCS1(s1, s2.substring(1));
			return Math.max(option1, option2);
		}
	}
	
	public static void main(String[] args) {
		String s1 = "abcdefghiabcdefghiabcdefghiabcdefghiabcdefghiabcdefghiabcdefghiabcdefghiabcdefghiabcdefghiabcdefghi";
		String s2 = "123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a123b45d6a";
		System.out.println(LCS2(s1, s2));
	}

}
