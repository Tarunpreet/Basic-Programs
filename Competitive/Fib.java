package l21;

public class Fib {

	
	public static int bestSum(int a[], int startIndex) {
		if (startIndex >= a.length) {
			return 0;
		}
		int option1 = a[startIndex] + bestSum(a, startIndex + 2);
		int option2 = bestSum(a, startIndex + 1);
		return Math.max(option1, option2);
	}
	
	public static int fibHelper(int n, int output[]) {
		if (n == 0 || n == 1) {
			output[n] = 1;
			return 1;
		}
		if (output[n] > 0) {
			return output[n];
		}
		int answer = fibHelper(n - 1, output) + fibHelper(n - 2, output);
		output[n] = answer;
		return answer;
	}
	public static int fib2(int n) {
		int output[] = new int[n + 1];
		int ans = fibHelper(n, output);
		return ans;
	}
	
	public static int fib(int n) {
		if (n == 0 || n == 1) {
			return 1;
		}
		return fib(n - 1) + fib(n -2);
	}
	
	
	
	public static void main(String[] args) {
		
	}
}
