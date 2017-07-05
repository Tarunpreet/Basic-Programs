package l15;

public class Pair<T, V> {
	private T first;
	private V second;
	
	public T getFirst() {
		return first;
	}
	
	public V getSecond() {
		return second;
	}
	
	public void setFirst(T first) {
		this.first = first;
	}
	
	public void setSecond(V second) {
		this.second = second;
	}
	
	public static void main(String[] args) {
		Pair<String, Integer> p = new Pair<String, Integer>();
	
		p.first = "abc";
	}
}
