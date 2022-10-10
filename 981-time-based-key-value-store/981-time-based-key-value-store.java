class TimeMap {

    HashMap<String,List<Pair>> hashMap;
    
    public TimeMap() {
        hashMap = new HashMap<>();
    }
    
    public void set(String key, String value, int timestamp) {
        
        if(hashMap.containsKey(key)){
            
            List<Pair> list = hashMap.get(key);
            int position = binarySearch(list,timestamp);
            
            if(position == -1){
                list.add(new Pair(timestamp,value));
            }
            
            else if(position == 0){
                list.add(0,new Pair(timestamp,value));
            }
            
            else if(list.get(position-1).timestamp==timestamp){
                list.get(position-1).value = value;
            }
            
            else{
                list.add(position,new Pair(timestamp,value));
            }
                
            hashMap.put(key,list);
        }
        else{
            List<Pair> list = new ArrayList<>();
            list.add(new Pair(timestamp,value));
            hashMap.put(key,list);
        }
    }
    
    public String get(String key, int timestamp) {
        if(!hashMap.containsKey(key)){
            return "";
        }
        
        List<Pair> list = hashMap.get(key);
        int size = list.size()-1;
        
        int position = binarySearch(list,timestamp);
        
        if(position==-1){
            return list.get(size).value;
        }
        else if(position==0){
            return "";
        }
        else{
            return list.get(position-1).value;
        }
    }
    
    public int binarySearch(List<Pair> list,int timestamp){
        
        int left = 0;
        int right = list.size() - 1;
        int ans = -1;
        while(left<=right){
            int mid = (right-left)/2+left;
            
            if(list.get(mid).timestamp <= timestamp){
                left = mid + 1;
            }
            else{
                right = mid - 1;
                ans = mid;
            }
        }
        
        return ans;        
    }
}

class Pair{
    int timestamp;
    String value;
    Pair(int t,String v){
        timestamp = t;
        value = v;
    }

    public String toString(){
        return (timestamp +" "+ value);
    }
}


/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap obj = new TimeMap();
 * obj.set(key,value,timestamp);
 * String param_2 = obj.get(key,timestamp);
 */