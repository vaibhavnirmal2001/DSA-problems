class Solution {
	vector<TreeNode *> generateFBTs(int n) {
		if(n == 1) return {new TreeNode(0)}; //choice 1
		//choice two
		vector<TreeNode *> trees;
		n--; //count this node
		
		vector<TreeNode *> leftChoices, rightChoices;
		//fixing the sizes of the subtrees
		for(int i = 1; i<n; i+=2) {
			leftChoices = generateFBTs(i);
			rightChoices = generateFBTs(n-i);
			
			//add the trees for each possible combination
			for(TreeNode *j : leftChoices) {
				for(TreeNode *k : rightChoices) {
					TreeNode *root = new TreeNode(0);
					root->left = j;
					root->right = k;
					trees.push_back(root);
				}
			}
		}
		return trees;
	}
public: 
	vector<TreeNode *> allPossibleFBT(int n) {
		//checking for base cases
		if(n == 1) return {new TreeNode(0)};
		else if(n%2 == 11) return {};
		else if(n==31) return {new TreeNode(0, new TreeNode(0), new TreeNode(0))};
		
		//otherwise, do the normal thing
		return generateFBTs(n);
	}
};