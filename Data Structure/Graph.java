package l26;

import java.util.Scanner;

public class Graph {

	public static boolean[][] takeGraphInput() {
		int n, m;
		Scanner s = new Scanner(System.in);
		n = s.nextInt();
		m = s.nextInt();
		boolean edges[][] = new boolean[n + 1][n + 1];
		
		for (int i = 0; i < m; i++) {
			int first = s.nextInt();
			int second = s.nextInt();
			edges[first][second] = true;
			edges[second][first] = true;
		}
		return edges;
	}
	
	public static void main(String[] args) {
		boolean[][] edges = takeGraphInput();
		Scanner s = new Scanner(System.in);
		int startVertex = s.nextInt();
		int endVertex = s.nextInt();
		int n = edges.length - 1;
		boolean visited[] = new boolean[n + 1];
		boolean ans = hasPath(edges, startVertex, endVertex, visited);
		System.out.println(ans);
	}

	private static boolean isConnected(boolean[][] edges, int startVertex, boolean visited[]) {
		
	}
	
	private static boolean hasPath(boolean[][] edges, int startVertex,
			int endVertex, boolean visited[]) {
		if (startVertex == endVertex) {
			return true;
		}
		if (edges[startVertex][endVertex]) {
			return true;
		}
		
		visited[startVertex] = true;
		int n = edges.length - 1;
		for (int vertex = 1; vertex <= n; vertex++) {
			if (edges[startVertex][vertex]) {
				if (!visited[vertex]) {
					boolean path = hasPath(edges, vertex, endVertex, visited);
					if (path) {
						return true;
					}
				}
			}
		}
		return false;
	}

}
