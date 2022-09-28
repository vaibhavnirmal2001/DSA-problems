class Solution {
   public int minSetSize(int[] arr) {
	Map<Integer, Integer> map = new HashMap<>();
	ArrayList<Integer>[] list = new ArrayList[arr.length + 1];
	
	for (int num : arr) {
		map.put(num, map.getOrDefault(num, 0) + 1);
	}

	for (int num : map.keySet()) {
		int count = map.get(num);
		if (list[count] == null) {
			list[count] = new ArrayList<Integer>();
		}
		list[count].add(num);
	}
	
	int steps = 0, res = 0;
	for (int i = arr.length; i > 0; i--) {
		List<Integer> cur = list[i];
		if (cur == null || cur.size() == 0) continue;
		for (int num : cur) {
			steps += i;
			res++;
			if (steps >= arr.length / 2)
				return res;
		}
	}
	return arr.length;
}
}