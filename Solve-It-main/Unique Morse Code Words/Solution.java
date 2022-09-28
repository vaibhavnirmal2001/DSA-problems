  public int uniqueMorseRepresentations(String[] words) {
        String[] d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        HashSet<String> s = new HashSet<>();
        for (String w : words) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < w.length(); ++i) {
                sb.append(d[w.charAt(i) - 'a']);
            }
            s.add(sb.toString());
        }
        return s.size();
    }