class Solution {
    public boolean canConstruct(String s1, String s2) {
        ArrayListCharacter al = new ArrayList();
        for (int i = 0; i  s2.length(); i++) {
            al.add(s2.charAt(i));
        }
        for (int i = 0; i  s1.length(); i++) {
            if (!al.contains(s1.charAt(i))) return false;
            else al.set(al.indexOf(s1.charAt(i)),' ');
        }
        return true;
    }
}