class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int next = 0;    // dp[i+1]
        int next2 = 0;   // dp[i+2]
        int curr = 0;    // dp[i]

        for (int i = n - 1; i >= 0; i--) {
            curr = max(nums[i] + next2, next); // rob or skip
            next2 = next;
            next = curr;
        }
        return curr;
    }
};
