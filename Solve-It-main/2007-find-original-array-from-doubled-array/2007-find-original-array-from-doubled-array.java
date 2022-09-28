class Solution {

    public static int[] findOriginalArray(int[] arr) {
        int n = arr.length;
        if(n % 2 != 0)return new int[0];

        int[] res = new int[n/2];
        int idx = 0;

        Arrays.sort(arr);
        int j = n-1;
        Map<Integer,Integer> map = new HashMap<>();

        while(j >= 0){
            int element = arr[j];
            int twice = element * 2;

            if(map.containsKey(twice)){
                if(map.get(twice) == 1)map.remove(twice);
                else map.put(twice,map.get(twice) - 1);
                res[idx++] = element;
            }else{
                map.put(element,map.getOrDefault(element,0) + 1);
            }
            j--;
        }

        return idx == n/2 ? res : new int[0];

    }
}