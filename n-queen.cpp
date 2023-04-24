class Solution {
public:
    vector<vector<string>> ans;
    bool issafe(int board[][10], int i, int j, int n) {
	for (int row = 0; row < i; ++row) {
		if (board[row][j] == 1) {
			return false;
		}
	}
	int x = i;
	int y = j;
	while (x >= 0 && y >= 0) {
		if (board[x][y]) {
			return false;
		}
		x--;
		y--;
	}
	x = i;
	y = j;
	while (x >= 0 && y < n) {
		if (board[x][y] == 1) {
			return false;
		}
		x--;
		y++;
	}
	return true;
}

bool solveNqueen(int board[][10], int i, int n) {
	if (i == n) {
        vector<string> temp;
		for (int i = 0; i < n; ++i) {
            string s;
			for (int j = 0; j < n; ++j) {
				if (board[i][j] == 1) {
                    s.push_back('Q');
				}
                else {
                    s.push_back('.');
                }
            }
            temp.push_back(s);
		}
        ans.push_back(temp);
		return false;
	}
	for (int j = 0; j < n; ++j) {
		if (issafe(board, i, j, n)) {
			board[i][j] = 1;
			bool nextqueenrakhpaye = solveNqueen(board, i + 1, n);
			if (nextqueenrakhpaye) {
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}
    vector<vector<string>> solveNQueens(int n) {
        int board[10][10] = {};
        solveNqueen(board, 0, n);
        return ans;
    }
};
