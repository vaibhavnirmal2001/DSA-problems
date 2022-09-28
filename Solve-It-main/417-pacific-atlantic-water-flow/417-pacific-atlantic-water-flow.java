class Solution {
    public List<List<Integer>> pacificAtlantic(int[][] heights) {
        int m = heights[0].length;
        int n = heights.length;
                
        int[][] dir = {{-1,0},{0,-1},{1,0},{0,1}};
        int[][] pacific = new int[n][m];
        int[][] atlantic = new int[n][m];
        
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int r1 = getAllPacific(heights,dir,i,j,new boolean[n][m],pacific);
                pacific[i][j] = r1;
                int r2 = getAllAtlantic(heights,dir,i,j,new boolean[n][m],atlantic);
                atlantic[i][j] = r2;
                if(r1==1 && r2==1){
                    List<Integer> tlist = new ArrayList<>();
                    tlist.add(i);
                    tlist.add(j);
                    list.add(tlist);
                }
            }
        }
        
        return list;
    }
    
    public int getAllPacific(int[][] heights,int[][] dir,int i,int j,boolean[][] visited,int[][] pacific){
        
        if(pacific[i][j]!=0){
            return pacific[i][j];
        }
        
        if(i==0 || j==0)
            return 1;
        
        int res = -1;
        for(int[] d : dir){
            int dx = d[0]+i;
            int dy = d[1]+j;
            if(dx>=0 && dy>=0 && dx<heights.length && dy<heights[0].length && 
               heights[dx][dy]<=heights[i][j] && !visited[dx][dy]){
                visited[dx][dy] = true;
                res = Math.max(res,getAllPacific(heights,dir,dx,dy,visited,pacific));
            }
        }
                
        return res;
    }
    public int getAllAtlantic(int[][] heights,int[][] dir,int i,int j,boolean[][] visited,int[][] atlantic){
        if(atlantic[i][j]!=0)
            return atlantic[i][j];
        
        if(i==heights.length-1 || j==heights[0].length-1)
            return 1;
        
        int res = -1;
        for(int[] d : dir){
            int dx = d[0]+i;
            int dy = d[1]+j;
            if(dx>=0 && dy>=0 && dx<heights.length && dy<heights[0].length && 
               heights[dx][dy]<=heights[i][j] && !visited[dx][dy]){
                visited[i][j] = true;
                res = Math.max(res,getAllAtlantic(heights,dir,dx,dy,visited,atlantic));
            }
        }
        
        return res;
    }
}