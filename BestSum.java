package l21;

public class BestSum {

	public static int bestSum(int a[], int startIndex) {
		if (startIndex >= a.length) {
			return 0;
		}
		int option1 = a[startIndex] + bestSum(a, startIndex + 2);
		int option2 = bestSum(a, startIndex + 1);
		return Math.max(option1, option2);
	}
	
	public static void main(String[] args) {
		
	}

}
