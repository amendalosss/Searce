import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class DoWhileExerciseRunner {

	static List<String> que = new ArrayList<>(); // que for storing X values
	static int rear = -1, front = -1; // variables for pointing in Que
	static List<Integer> stack = new ArrayList<>(50); // Stack for sotring the values of X
	static int top = -1; // variable for pointing in stack
	static List<Integer> max = new ArrayList<>();

	public static void add_in_que(String data) {
//		System.out.println("add_in_que called:");
//		if (front == 0) {
//		} else {
//			if (rear == 0) {
//				front++;
//			}
//			rear++;
//			que.add(data);
//
//		}

		if (front == -1 && rear == -1) { // first time pushing
			que.add(data);
			rear++;
			front++;
		} else if (rear != -1 && front != -1) {
			que.add(data);
			front++;
		}

	}

	public static String del_in_que() {
//		System.out.println("del_in_que called:");
		String s = "";
		if (rear == front && rear == 0) {
			que.remove(0);
		} else {
			s = que.get(front);
			que.remove(front);
			front--;

		}
		return s;
	}

	public static void push(String data) {
		System.out.println("push called:");
		int s = Integer.valueOf(data);
		if (top == 50) {
		} else {
			top++;
			stack.add(s);
		}
	}

	public static void pop() {
		System.out.println("pop called:");
		if (top < 0) {
		} else {
			top--;
		}
	}

	public static Integer[] getMax(String[] data) {
		System.out.println("getMax called:");
		String s = "";
		for (int i = 0; i < data.length; i++) {
			if (data[i] == "1") {
				s = del_in_que();
				push(s);
			}
			if (data[i] == "2") {
				pop();
			}
			if (data[i] == "3") {
				Collections.sort(stack);
				max.add(stack.get((stack.size()) - 1));
			}
		}
		System.out.println(stack.get((stack.size()) - 1));
		Integer[] maximum = max.toArray(new Integer[max.size()]);
		return maximum;
	}

	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		System.out.println("Enter the no.s of queries:");
		int n = read.nextInt();
		read.nextLine();
		String[] array = new String[n];
		System.out.println("Enter the elements:");
		for (int i = 0; i < n; i++) {
			array[i] = read.nextLine();
			char[] dummy = array[i].toCharArray();
			if (dummy.length > 1 && dummy[0] == '1') {
				char[] newArr = new char[dummy.length - 1];
				for (int c = 1; c < dummy.length; c++) {
					int index = c - 1;
					newArr[index] = dummy[c];
				}
				add_in_que(String.valueOf(newArr));
			} else if (dummy[0] == '2') {
				///// delete element on top of the stack
				del_in_que();
			} else if (dummy[0] == '3') {
				/////
				findMaxNewFunction();
			}
		}
//		Integer[] answer = getMax(array);
//		for (int i = 0; i < answer.length; i++) {
//			System.out.println(answer[i]);
//		}
		read.close();
		// System.out.println("The queries are:");
		// for(int i=0;i<n;i++)
		// {
		// System.out.println(array[i]);
		// if(array[i]=="1")
		// {
		// del_in_que();
		// }
		// }
	}

	public static void findMaxNewFunction() {
		int max = Integer.parseInt(que.get(rear).trim());
		for (int i = 0; i < que.size(); i++) {
			if (Integer.parseInt(que.get(i).trim()) > max) {
				max = Integer.parseInt(que.get(i).trim());
			}
		}
		System.out.println(max);
	}
}