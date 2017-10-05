package l15;

import java.util.Scanner;

public class NodeUse {

	public static int lengthR(Node<Integer> head) {
		if (head == null) {
			return 0;
		}
		return 1 + lengthR(head.next);
	}

	public static int length(Node<Integer> head) {
		int count = 0;
		while (head != null) {
			count++;
			head = head.next;
		}
		return count;
	}

	public static Node<Integer> insertAtIR(Node<Integer> head, int position, int element) {
		if (head == null && position > 0) {
			return head;
		}

		if (position == 0) {
			Node<Integer> newNode = new Node<Integer>(element);
			newNode.next  = head;
			return newNode;
		}
		Node<Integer> newNext = insertAtIR(head.next, position - 1, element);
		head.next = newNext;
		return head;
	}

	public static Node<Integer> insertAtI(Node<Integer> head, int position, int element) {
		if (position == 0) {
			Node<Integer> newNode = new Node<Integer>(element);
			newNode.next  = head;
			return newNode;
		}

		int l = length(head);
		if (position > l) {
			return head;
		}

		Node<Integer> prev = head;
		int i = 1;
		while (i < position) {
			prev = prev.next;
			i++;
		}
		Node<Integer> nextNode = new Node<Integer>(element);
		Node<Integer> next = prev.next;
		prev.next = nextNode;
		nextNode.next = next;
		return head;
	}

	public static Node<Integer> mid(Node<Integer> head) {
		if (head == null) {
			return null;
		}
		Node<Integer> fast = head.next;
		Node<Integer> slow = head;
		while (fast != null && fast.next != null) {
			fast = fast.next.next;
			slow = slow.next;
		}
		return slow;
	}

	public static Node<Integer> reverse4(Node<Integer> head)  {
		Node<Integer> prev = null;
		Node<Integer> current = head;
		while (current != null) {
			Node<Integer> temp = current.next;
			current.next = prev;
			prev = current;
			current = temp;
		}
		return prev;
	}

	public static Node<Integer> reverse3(Node<Integer> head)  {
		if (head == null || head.next == null) {
			return head;
		}

		Node<Integer> smallHead = reverse3(head.next);
		Node<Integer> smallTail = head.next;
		smallTail.next = head;
		head.next = null;
		return smallHead;
	}

	public static Node<Integer> bubbleSort(Node<Integer> head) {
		if (head == null) {
			return head;
		}
		int n = length(head);
		int i = 0;
		while (i < n) {
			Node<Integer> prev = null;
			Node<Integer> current = head;
			int j = 0;
			while (j < n - i - 1) {
				if (current.data <= current.next.data) {
					prev = current;
					current = current.next;
				} else {
					//				Node<Integer> currentNext = current.next;
					//				Node<Integer> currentNextNext = current.next.next;
					//				prev.next = currentNext;
					//				currentNext.next = current;
					//				current.next = currentNextNext;
					if (prev != null) {
						prev.next = current.next;
						current.next = current.next.next;
						prev.next.next = current;
						prev = prev.next;
					} else {
						Node<Integer> currentNext = current.next;
						current.next = currentNext.next;
						currentNext.next = current;
						head = currentNext;
						prev = currentNext;
					}
				}
				j++;
			}
			i++;
		}
		return head;
	}


	public static DoubleNode reverse2(Node<Integer> head) {
		if (head == null || head.next == null) {
			DoubleNode output = new DoubleNode(head, head);
			return output;
		}

		DoubleNode output = reverse2(head.next);
		output.tail.next = head;
		head.next = null;
		output.tail = head;
		return output;
	}

	public static Node<Integer> reverse1(Node<Integer> head) {
		if (head == null || head.next == null) {
			return head;
		}

		Node<Integer> smallHead = reverse1(head.next);
		Node<Integer> smallTail = smallHead;
		while (smallTail.next != null) {
			smallTail = smallTail.next;
		}
		smallTail.next = head;
		head.next = null;
		return smallHead;
	}

	//	
	public static Node<Integer> takeInput() {
		Node<Integer> head = null;
		Node<Integer> tail = null;
		Scanner s = new Scanner(System.in);
		int nextData = s.nextInt();
		while (nextData != -1) {
			Node<Integer> nextNode = new Node<>(nextData);
			if (head == null) {
				head = nextNode;
				tail = nextNode;
			} else {
				tail.next = nextNode;
				tail = nextNode;
			}
			nextData = s.nextInt();
		}
		return head;
	}

	public static<T> void print(Node<T> head) {
		while (head != null) {
			System.out.print(head.data + "-->");
			head = head.next;
		}
		System.out.println();

	}

	public static void main(String[] args) {

		Node<Integer> a = new Node<Integer>(10);


		Node<String> f = new Node<String>("a");
		Node<String> s = new Node<String>("b");
		Node<String> t = new Node<String>("c");
		f.next = s;
		s.next = t;
		print(f);


		Node<Integer> head = takeInput();
		print(head);
		insertAtI(head, 2, 10);
		print(head);

		head = reverse3(head);
		print(head);

		head = bubbleSort(head);
		print(head);
	}

}
