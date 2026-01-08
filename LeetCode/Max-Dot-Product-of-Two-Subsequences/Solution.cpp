1class Solution {
2public:
3    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
4         int n = nums1.size(), m = nums2.size();
5        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MIN));
6
7        for (int i = n - 1; i >= 0; i--) {
8            for (int j = m - 1; j >= 0; j--) {
9                int take = nums1[i] * nums2[j];
10                if (dp[i + 1][j + 1] != INT_MIN)
11                    take += max(0, dp[i + 1][j + 1]);
12
13                int skip1 = dp[i + 1][j];
14                int skip2 = dp[i][j + 1];
15
16                dp[i][j] = max({take, skip1, skip2});
17            }
18        }
19        return dp[0][0];
20    }
21};