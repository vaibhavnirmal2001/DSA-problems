class Solution {
    int n;
    public boolean isPossible(int[] a) {
        n = a.length;
        Map<Integer , Integer> frq = new HashMap<>();
        for(int e : a){
            frq.put(e , frq.getOrDefault(e , 0) + 1);
        }
        Map<Integer , Integer> hm = new HashMap<>(); // hypothetical map
        for(int i = 0; i < n; i++){
            if(frq.get(a[i]) == 0) continue; 
            if(hm.getOrDefault(a[i] , 0) > 0){ // if this number can be fit into previously started subsequence
                hm.put(a[i] , hm.get(a[i]) - 1);
                hm.put(a[i] + 1 , hm.getOrDefault(a[i] + 1 , 0) + 1);
            }
            else{ // need to start its own subsequence
                int cnt = 0;
                if(frq.getOrDefault(a[i] + 1 , 0) > 0){
                    cnt++;
                    frq.put(a[i] + 1 , frq.get(a[i] + 1) - 1);
                }
                if(frq.getOrDefault(a[i] + 2 , 0) > 0){
                    cnt++;
                    frq.put(a[i] + 2 , frq.get(a[i] + 2) - 1);
                }
                if(cnt != 2){
                    return false;
                }
                hm.put(a[i] + 3 , hm.getOrDefault(a[i] + 3 , 0) + 1);
            }
            frq.put(a[i] , frq.get(a[i]) - 1);
        }
        return true;
    }
}