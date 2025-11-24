class Solution {
public:
    

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+3,-1);
        dp[n]=dp[n+1]=dp[n+2]=0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i]=max(nums[i]+dp[i+2],nums[i]+dp[i+3]);
        }
        return max(dp[0],dp[1]);
    }
};