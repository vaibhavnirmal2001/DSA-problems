class Solution {
public:
    
#define lop(i,s,e)                                  for(int i=s;i<(int)e;i++)
#define pii                                         pair<int,int>
#define ff                                          first
#define ss                                          second

    pii par[501][501];                          // par[i][j] -> parent of cell {i, j}
    int sz[501][501];                           // sz[i][j] -> size of set whose leader/parent is {i, j}
    
    // DSU IMPLEMENTATION below
    // void build(int n, int m);               // Initialising DSU
    // pii find(pii a) ;                      // Finding leader/parent of cell {i, j}
    // void make_union(pii a, pii b);        // Uniting 2 cells 
    
     vector<vector<int>> matrixRankTransform(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector < vector<int> > ans(n, vector<int> (m, -1) );
        
        // Initialising DSU
        build(n, m);
        
        // Uniting All cells with rank value in same row
        lop(i, 0, n){
            map<int, pii> mp;
            lop(j, 0, m){
                int val = mat[i][j];
                if( mp.count( val ) ) make_union( {i,j} , mp[val]);
                mp[val] = {i, j};
            }
        }
        
        // Uniting all cells with rank value in same column
        lop(j, 0, m){
            map<int, pii> mp;
            lop(i, 0, n){
                int val = mat[i][j];
                if( mp.count( val ) ) make_union( {i,j} , mp[val]);
                mp[val] = {i, j};
            }
        }
        
        
        // Keeping cells with same rank in a vector of their parent/leader
        vector<pii> all[n][m];
        lop(i, 0, n)lop(j, 0, m){
            pii x = {i, j};
            pii p = find(x);
            all[p.ff][p.ss].push_back( x );
        }
        
        // Storing vectors in a map  with their parent value as key
        map<int, vector< vector<pii> > > mp;
        lop(i, 0, n){
            lop(j,0,m){
                if( (int)all[i][j].size() == 0 ) continue;
                int val = mat[i][j];
                mp[ val ].push_back( all[i][j] );
            }
        }
        vector<int> row(n, 0), col(m, 0);
         
        // row[i] = largest rank till now in ith row
        // col[i] = largest rank till now in ith column
         

        for(auto &i: mp){   // first assigning ranks to smaller elements then larger elements
            
            for(auto &j: i.ss){ 
                
                // x -> answer for current vector of cells ( all these cells will get the same rank )
                int x = 0;
                
                for(auto &k: j){
                    int r = k.ff, c = k.ss;         // {r,c} -> current cell
                    
                    // ans should be >= max(row[r], row[c]) + 1 ,
                    // because largest rank of smaller elements in this row/column is == max(row[r], row[c])
                    
                    x = max(x,  max(row[r], col[c]) + 1 );
                }
                
                for(auto &k: j){
                    int r = k.ff, c = k.ss;
                    ans[r][c] = x;
                   
                    // Updating largest rank in row and column for the current row and column
                    row[r] = max(row[r], x);
                    col[c] = max(col[c], x);
                }
            }
        }

        return ans;
    }
    
    /// DSU IMPLEMENTATION
    void build(int n, int m) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                par[i][j] = {i, j};
                sz[i][j] = 1;
            }
        }
    }

    pii find(pii a) {                   // finding leader/parent of cell {i, j}
        if( par[a.ff][a.ss] == a) return a;
        return par[a.ff][a.ss] = find( par[a.ff][a.ss] );
    }

    void make_union(pii a, pii b) {         // Uniting 2 cells 
        pii pa = find(a), pb = find(b);

        if( pa != pb ) {
            if( sz[pa.ff][pa.ss] < sz[pb.ff][pb.ss] ) swap(pa,pb);
            par[pb.ff][pb.ss] = pa;
            sz[pa.ff][pb.ss] += sz[pb.ff][pb.ss];
        }
    }

    
};
