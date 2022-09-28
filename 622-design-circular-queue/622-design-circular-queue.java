class MyCircularQueue {

	public ListNode head;
	public ListNode tail = null;

	public MyCircularQueue(int k) {
		ListNode prev = null;
		for (int i = 0; i < k; i++) {
			if (i == 0) { // init head
				head = new ListNode(-1);
				prev = head;
			} else { // init others
				prev.next = new ListNode(-1);
				prev = prev.next;
			}
			if (i == k - 1) { //link last ListNode to the head
				prev.next = head;
			}
		}
	}

	public boolean enQueue(int value) {
		if (isEmpty()) {
			head.val = value;
			tail = head;
			return true;
		}

		if (isFull()) {
			return false;
		} else {
			tail.next.val = value;
			tail = tail.next;
			return true;
		}
	}

	public boolean deQueue() {
		if (isEmpty()) {
			return false;
		}
		head.val = -1;

		//check whether the value is the last non-empty value
		if(head == tail) { 
			tail = null;
		}
		head = head.next;
		return true;
	}

	public int Front() {
		return head.val;
	}

	public int Rear() {
		if(isEmpty()) {
			return -1;
		}
		return tail.val;
	}

	public boolean isEmpty() {
		return head.val == -1 || tail == null;
	}

	public boolean isFull() {
		if(tail == null) {
			return false;
		}
		if (tail.next == head && tail.val != -1 && head.val != -1) {
			return true;
		} else {
			return false;
		}
	}

	public static class ListNode {
		int val;
		ListNode next;

		ListNode(int val) {
			this.val = val;
		}
	}
}
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */