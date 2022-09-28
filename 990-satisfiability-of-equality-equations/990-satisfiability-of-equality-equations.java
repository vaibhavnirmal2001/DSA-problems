class Solution {
    private int[] groups = new int[26];
    public boolean equationsPossible(String[] equations) {
        for(int i = 1; i < 26; i++) {
            groups[i] = i;
        }
        for(String s : equations) {
            if(s.charAt(1) == '=') {
                union(s.charAt(0), s.charAt(3));
            }
        }
        
        for(String s : equations) {
            if(s.charAt(1) == '!') {
                if(find(s.charAt(0) - 'a') == find(s.charAt(3) - 'a')) return false;
            }
        }
        return true;
    }
    
    
    private void union(Character pre, Character rear) {
        groups[find(pre -'a')] = groups[find(rear - 'a')];
    }
    
    
    private int find(int x) {
        if(x == groups[x]) {
            return x;
        }
        return groups[x] = find(groups[x]);
    }
        
}