// Leetcode 155
class MinStack {
    LinkedList<Long> st = new LinkedList<>();
    long minsf = 0;

    public MinStack() {}

    public void push(int val) {
        long x = val;
        if (st.size() == 0) {
            st.addFirst(x);
            minsf = x;
            return;
        }

        if (x < minsf) {
            // encode
            st.addFirst(2 * x - minsf);
            minsf = x;
        } else {
            st.addFirst(x);
        }
    }

    public void pop() {
        if (st.getFirst() < minsf) {
            // decode
            minsf = 2 * minsf - st.getFirst();
        }

        st.removeFirst();
    }

    public int top() {
        if (st.getFirst() < minsf) {
            return (int) minsf;
        }

        return (int) (long) st.getFirst();
    }

    public int getMin() {
        return (int) minsf;
    }
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
