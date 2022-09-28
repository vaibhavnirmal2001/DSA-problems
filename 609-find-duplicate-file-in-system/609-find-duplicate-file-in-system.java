class Solution {
    public List<List<String>> findDuplicate(String[] paths) {
        
        Map<String, List<String>> mp = new HashMap<>();
        
        for(String path : paths)
        {
            // split path based on space
            String dir[] = path.split(" ");
            
            // root is present at 0th index
            String root_dir = dir[0];
            
            
            for(int i = 1; i < dir.length; i++)
            {
                // get the file name and attach it with root_dir 
                String fileName = root_dir + '/' + dir[i].substring(0, dir[i].indexOf('('));
                
                // get the contents of file name
                String content = dir[i].substring(dir[i].indexOf('('), dir[i].indexOf(')'));
                
                // get the list for content, if not create it
                List<String> curList = mp.getOrDefault(content, new ArrayList<>());
                
                // add the filname
                curList.add(fileName);
                
                // insert into map
                mp.put(content, curList);
            }
        }
        
        List<List<String>> res = new ArrayList<>();
        // traverse the map
        for(Map.Entry<String, List<String>> entry : mp.entrySet())
        {
            // if size of list is more than 1
            if(entry.getValue().size() > 1)
            {
                // add it to result
                res.add(entry.getValue());
            }
        }
        
        return res;
    }
}