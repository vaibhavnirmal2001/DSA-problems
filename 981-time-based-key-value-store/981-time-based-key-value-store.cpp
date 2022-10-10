class TimeMap {
public:
    map<string,vector<pair<int,string>>> m; 
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(!m[key].size())
            return "";
        int low = 0;
        int high = m[key].size()-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(m[key][mid].first == timestamp)
                return m[key][mid].second;
            else if(m[key][mid].first > timestamp)
                high = mid-1;
            else
                low = mid + 1;
        }
        
        return high >= 0 ? m[key][high].second : "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */