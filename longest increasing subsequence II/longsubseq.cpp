class segmentTree {
  vector<int> tree;
    
    int leftChild(int n)
    {
        return n*2+1;
    }
    
    int rightChild(int n)
    {
        return n*2+2;
    }
    
    int getMid(int left, int right)
    {
        return left + (right-left)/2;
    }
public:
    segmentTree(int n) {
        tree.assign(n*4, 0);
    }
    
    void update(int node, int left, int right, int idx, int val)
    {
        if(left == right)
        {
            tree[node] = val;
            return;
        }
        
        int mid = getMid(left, right);
        int lc = leftChild(node);
        int rc = rightChild(node);
        if(idx<=mid)
            update(lc, left, mid, idx, val);
        else
            update(rc, mid+1, right, idx, val);
        
        tree[node] = max(tree[lc], tree[rc]);
    }
    
    int query(int node, int left, int right, int qLeft, int qRight)
    {
        if(qLeft<=left && qRight>=right)
            return tree[node];
        
        if(right < qLeft || left>qRight)
            return INT_MIN;
        
        int mid = getMid(left, right);
        
        return max(query(leftChild(node), left, mid, qLeft, qRight), query(rightChild(node), mid+1, right, qLeft, qRight));
    }
};

int mx = 100000 + 20;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums, int k) {
        segmentTree s(mx);
        int res = 0;
        for(int i: nums)
        {
            int l = max(0, i - k);
            int h = max(i - 1, 0);
            if(l<=h)
            {
                int qq = s.query(0, 0, mx, l, h);
                res = max(res, qq+1);
                s.update(0, 0, mx, i, qq+1);
            }
        }
        
        return res;
    }
};
