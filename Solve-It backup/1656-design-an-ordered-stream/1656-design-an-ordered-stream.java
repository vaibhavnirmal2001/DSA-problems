class OrderedStream {
    int ptr;
    String[] res;
    
    public OrderedStream(int n) {
        ptr = 0;
        res = new String[n];
    }
    
    public List<String> insert(int id, String value) {
        List<String> list = new ArrayList<>();
        
        res[id - 1] = value;
        while (ptr < res.length && res[ptr] != null) {
            list.add(res[ptr]);
            ptr++;
        }
        
        return list;
    }

}

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream obj = new OrderedStream(n);
 * List<String> param_1 = obj.insert(idKey,value);
 */