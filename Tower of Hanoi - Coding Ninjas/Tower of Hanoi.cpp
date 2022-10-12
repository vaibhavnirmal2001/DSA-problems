void solve(int n, int s, int e , vector<vector<int> > &ans)
{
    if(n==1)
    {
        ans.push_back({s,e});
        return;
    }
    int o = 6-(s+e);
    solve(n-1 , s, o, ans);
    ans.push_back({s,e});
    solve(n-1, o , e , ans);
 }

vector<vector<int>> towerOfHanoi(int n)
{    
    vector<vector<int>> ans;
    solve(n , 1, 3, ans);
    return ans; 
}