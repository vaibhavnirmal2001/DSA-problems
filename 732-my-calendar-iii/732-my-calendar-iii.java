public class MyCalendarThree {

	private Map<Integer, Integer> timeline;

	public MyCalendarThree() {
		timeline = new TreeMap<>();
	}

	public int book(int start, int end) {
		timeline.put(start, timeline.getOrDefault(start, 0) + 1);
		timeline.put(end, timeline.getOrDefault(end, 0) - 1);
		int result = 0, curr = 0;
		for(int v : timeline.values()) result = Math.max(result, curr += v);
		return result;
	}
}

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree obj = new MyCalendarThree();
 * int param_1 = obj.book(start,end);
 */