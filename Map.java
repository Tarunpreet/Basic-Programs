package l22;

import java.util.HashMap;
import java.util.TreeMap;

import l10.Student;

public class Map {

	public static String maxFreqWord(String input) {
		HashMap<String, Integer> freq = new HashMap<>();
		int currentWordStart = 0;
		String maxWord = "";
		int maxWordFreq = 0;
		for (int i = 0; i < input.length(); i++) {
			if (input.charAt(i) == ' ') {
				String currentWord = 
						input.substring(currentWordStart, i);
				int currentFreq = 0;
				if (freq.containsKey(currentWord)) {
					currentFreq = freq.get(currentWord);
				}
				freq.put(currentWord, currentFreq + 1);
				int newFreq = currentFreq + 1;
				if (newFreq > maxWordFreq) {
					maxWord = currentWord;
					maxWordFreq = newFreq;
				}
				currentWordStart = i + 1;
			}
		}
		return maxWord;
	}
	
	public static void main(String[] args) {
		HashMap<Integer, Integer> m;
		HashMap<Student, Integer> map2;
		
		Student s = new Student("d", 23);
		
		HashMap<String, Integer> map = new HashMap<>();
		map.put("abc", 10);
		System.out.println(map.get("abc"));
		System.out.println(map.remove("abc"));
		System.out.println(maxFreqWord("this is a test string with is ad as ar test this test "));
	}

}
