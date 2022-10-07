class Solution {
    vector<vector<int>> mat;
public:
    int countOfElementsLessThanEqualToMid(int mid){
        int cnt = 0;
        // we use O(M + N)approah to  find cnt of elements less than or equal to mid
        
        int row = 0;
        int col = mat[0].size() - 1;
        
        while(row < mat.size()){
            while(col >= 0 and mat[row][col] > mid)col--;
            cnt += col + 1;
            row++;
        }
       
        
        return cnt;
        
        
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        // Binary SEARCH
        
        int low = matrix[0][0];
        int high = matrix[n - 1][m - 1];
        mat = matrix;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(countOfElementsLessThanEqualToMid(mid) >= k){
                ans = mid;
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};