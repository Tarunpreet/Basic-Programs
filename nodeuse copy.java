package node;

import java.util.Scanner;

public class nodeuse {


public static node takeInput() {
			node head = null;
			Scanner s = new Scanner(System.in);
			int nextData = s.nextInt();
			while (nextData != -1) {
				node nextNode = new node(nextData);
				if (head == null) {
					head = nextNode;
				} else {
					node tail = head;
					while (tail.next != null) {
						tail = tail.next;
					}
					tail.next = nextNode;
				}
				nextData = s.nextInt();
			}
			return head;
		}
		
		public static void print(node head) {
			while (head != null) {
				System.out.print(head.data + "-->");
				head = head.next;
			}
			System.out.println();
			
		}
		public static int length(node head) {
			int l=0;
			while (head != null) {
				l=l+1;
				head = head.next;
			}
			System.out.println();
			return l;
		}
		public static void printnth(node head,int num) {
			int l=0;
			while (l != num) {
				head = head.next;
				l=l++;
			}
			System.out.print(head.data);
			
		}
		public static node insertati(node head,int pos,int num) {
			node temp=head;
			for(int i=0;i<pos-1;i++)
			{
				temp=temp.next;
			}
			node nextNode = new node(num);
			nextNode.next=temp.next;
			temp.next=nextNode;
			return head;
		}
		public static node insertatiR(node head,int pos,int num) {
			
			
			if(pos==0)
			{
				node nextNode = new node(num);
				nextNode.next=head;
				return nextNode;
			}
			node temp=insertatiR(head.next,pos-1, num);
			head.next=temp;
			return head;
		}
		public static node deleteati(node head,int pos) {
			node temp=head;
			for(int i=0;i<pos-1;i++)
			{
				temp=temp.next;
			}
			
			temp.next=temp.next.next;
			return head;
		}
		public static node deleteatiR(node head,int pos) {

			if(pos==0)
			{
				return head.next;
			}
			node temp=deleteatiR(head.next,pos-1);
			head.next=temp;
			return head;
		}
		//1 3 4 5 6 7 8 9 -1
		public static node reverseR(node temp,node temp2)
		{
			if(temp2==null)
			{
				return temp;
			}
			node head=reverseR(temp2,temp2.next);
					temp2.next=temp;
					temp.next=null;
			return head;
			
		}
		public static node reversekgroup(node head,int k) {
			if(head==null)
			{
				return null;
			}
			node temp=head;
			node prev=null;
			node next=null;
			int i=0;
			while(i<k&&head!=null)
			{
				next=head.next;
				head.next=prev;
				prev=head;
				head=next;
				i++;
			}
			temp.next=reversekgroup(next,k);
			return prev;
		
		}
		public static void main(String[] args) {
			node head = takeInput();
			//print(head);
			int num,pos;
			Scanner s1 = new Scanner(System.in);
			
			print(head);
//			System.out.println(length(head));
//			num=s1.nextInt();
//			pos=s1.nextInt();
//			head=insertatiR(head,pos,num);
//			print(head);
//			deleteatiR( head, pos);
//			print(head);
			head=reverseR(head,head.next);
			//head=reversekgroup(head, 3);
			print(head);
			System.out.println();
			System.out.println();
	}

}
