class Solution {
public:
	int countSquares(vector<vector<int>>& matrix) {
		int n = matrix.size(), m = matrix[0].size();
		vector<vector<int>> dp(matrix.begin(), matrix.end());

		for (int i = 1; i < n; ++i) {
			for (int j = 1; j < m; ++j) {
				if (dp[i][j]) {
					dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
				}
			}
		}
        
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				ans += dp[i][j];
			}
		}
		return ans;
	}
};
